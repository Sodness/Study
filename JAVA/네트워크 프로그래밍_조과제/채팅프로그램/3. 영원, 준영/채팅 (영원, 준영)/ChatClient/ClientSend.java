package ChatClient;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.Socket;
import java.net.UnknownHostException;
import java.text.SimpleDateFormat;
import java.time.LocalDate;
import java.util.Date;
import java.util.StringTokenizer;
import java.util.Vector;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JList;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTextArea;
import javax.swing.JTextField;
import javax.swing.border.EmptyBorder;

public class ClientSend extends JFrame implements ActionListener, KeyListener {

    // Login GUI 변수
    private final JFrame Login_GUI = new JFrame();
    private JPanel login_pane;
    private JTextField ip_tf; // IP 택스트 필드 Refactor → Rename
    private JTextField port_tf; // port 택스트 필드
    private JTextField id_tf; // ID 택스트 필드
    private final JButton login_btn = new JButton("접 속"); // 접속 버튼

    // Main GUI 변수
    private JPanel contentPane;
    private JTextField msg_tf;
    private final JButton notesend_btn = new JButton("쪽지보내기");
    private final JButton joinroom_btn = new JButton("채팅방참여");
    private final JButton exitRoom_btn = new JButton("방나가기"); // 영원: 방나가기 선언
    private final JButton inviteRoom_btn = new JButton("초대하기");	// 영원: 초대하기 선언
    private final JButton create_room_btn = new JButton("방만들기");
    private final JButton send_btn = new JButton("전송");
    private final JList<String> User_List = new JList(); // 전체 접속자 리스트
    private final JList Room_List = new JList(); // 전체 방 목록 리스트
    private final JTextArea Chat_area = new JTextArea(); // 채팅창 변수
    
   
    
    // network 변수
    Socket socket;
    String IP = "127.0.0.1";
    int port = 12345;
    String id;

    // Stream 변수
    InputStream is;
    DataInputStream dis;
    OutputStream os;
    DataOutputStream dos;

    // 클라이언트 관리
    Vector<String> user_list = new Vector<>();
    Vector<String> roomListVC = new Vector<>();
    StringTokenizer st;

    private String My_Room;
    private Boolean stopped = false;

    ClientSend() {
        login_init(); // 로그인 메뉴 화면
        main_init(); // 메인 메뉴 화면
        start(); // 리스너 연결

    }

    private void login_init() {
        Login_GUI.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        Login_GUI.setBounds(300, 100, 300, 390);
        login_pane = new JPanel();
        login_pane.setBorder(new EmptyBorder(5, 5, 5, 5));
        Login_GUI.setContentPane(login_pane);
        login_pane.setLayout(null);

        JLabel label1 = new JLabel("Server IP");
        label1.setBounds(20, 160, 80, 16);
        this.login_pane.add(label1);

        JLabel label2 = new JLabel("Sever Port");
        label2.setBounds(20, 200, 80, 16);
        login_pane.add(label2);

        JLabel label3 = new JLabel("ID");
        label3.setBounds(20, 240, 80, 16);
        login_pane.add(label3);

        ip_tf = new JTextField();
        ip_tf.setBounds(120, 160, 140, 20);
        login_pane.add(ip_tf);
        ip_tf.setColumns(10);

        port_tf = new JTextField();
        port_tf.setBounds(120, 200, 140, 20);
        login_pane.add(port_tf);
        port_tf.setColumns(10);

        id_tf = new JTextField();
        id_tf.setBounds(120, 240, 140, 20);
        login_pane.add(id_tf);
        id_tf.setColumns(10);

        login_btn.setBounds(30, 290,220, 24);
        login_pane.add(login_btn);
        Login_GUI.setVisible(true);
        this.setVisible(true);
    }

    private void main_init() {
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setBounds(600, 100, 640, 550);
        contentPane = new JPanel();
        contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
        setContentPane(contentPane);
        contentPane.setLayout(null);

        JLabel label4 = new JLabel("전체 접속자");
        label4.setBounds(20, 20, 100, 16);
        contentPane.add(label4);

        JLabel label5 = new JLabel("채팅방목록");
        label5.setBounds(20, 210, 100, 16);
        contentPane.add(label5);

        User_List.setBounds(20, 40, 100, 120);
        contentPane.add(User_List);

        notesend_btn.setBounds(20, 170, 100, 24);
        contentPane.add(notesend_btn);

        Room_List.setBounds(20, 230, 100, 120);
        contentPane.add(Room_List);

        joinroom_btn.setBounds(20, 360, 100, 24);
        contentPane.add(joinroom_btn);
        joinroom_btn.setEnabled(false);

        create_room_btn.setBounds(20, 390, 100, 24);
        contentPane.add(create_room_btn);
        
        exitRoom_btn.setBounds(20, 420, 100, 24);	// 영원: 방나가기 추가
        contentPane.add(exitRoom_btn);
        exitRoom_btn.setEnabled(false);
        
        inviteRoom_btn.setBounds(20, 450, 100, 24);	// 영원: 초대하기
        contentPane.add(inviteRoom_btn);
        inviteRoom_btn.setEnabled(false);

        JScrollPane scrollPane = new JScrollPane();
        scrollPane.setBounds(140, 20, 460, 420);
        contentPane.add(scrollPane);

        scrollPane.setColumnHeaderView(Chat_area);
        Chat_area.setEditable(false);

        msg_tf = new JTextField();
        msg_tf.setBounds(140, 450, 400, 24);
        contentPane.add(msg_tf);
        msg_tf.setColumns(10);
        msg_tf.setEditable(false);

        send_btn.setBounds(540, 450, 60, 24);
        contentPane.add(send_btn);
        send_btn.setEnabled(false);
        this.setVisible(false);
    }

    private void start() {
        login_btn.addActionListener(this); // 로그인 리스너 연결
        notesend_btn.addActionListener(this); // 쪽지 전송 리스너
        joinroom_btn.addActionListener(this); // 채팅방참여 리스너
        create_room_btn.addActionListener(this); // 방만들기 리스너
        exitRoom_btn.addActionListener(this);	// 영원: 방나가기 리스너
        inviteRoom_btn.addActionListener(this); // 영원: 초대하기 리스너
        send_btn.addActionListener(this); // 전송 버튼 리스너
        msg_tf.addKeyListener(this); // 전송버튼
    }

    private void network() {
        try {
            System.out.println(IP);
            socket = new Socket(IP, port);
            if (socket != null)
                connection();
            System.out.println("연결 생성 완료");
        } catch (UnknownHostException e) {
            JOptionPane.showMessageDialog(null, "연결 실패", "알림", JOptionPane.ERROR_MESSAGE);
        } catch (IOException e) {
            JOptionPane.showMessageDialog(null, "연결 실패", "알림", JOptionPane.ERROR_MESSAGE);
        }
    }

    private void connection()
    {
        try {
            is = socket.getInputStream();
            dis = new DataInputStream(is);
            os = socket.getOutputStream();
            dos = new DataOutputStream(os);

        } catch (IOException e) {
            JOptionPane.showMessageDialog(null, "연결 실패", "알림", JOptionPane.ERROR_MESSAGE); //9700
        }

        //Main GUI
        this.setVisible(true);
        this.Login_GUI.setVisible(false);

        setTitle("사용자: "+id);

        send_Msg(id + "/." + "/." + "/.");
        user_list.add(id);
        System.out.println(user_list);

        Thread th = new Thread(new Runnable() {
            public void run() {
                while (!stopped) {
                    try {
                        System.out.println("서버로부터 수신전"); // ~~~~~~~~~~~~~
                        String msg = dis.readUTF();
                        System.out.println("서버로부터 수신: " + msg);
                        recv_Msg(msg);
                    } catch (IOException e) {
                        JOptionPane.showMessageDialog(null, "서버와 연결 끓어짐", "알림", JOptionPane.ERROR_MESSAGE); //9700
                    }
                }
                System.out.println("out~~~~~~~~~~~~~~");
            }
        });
        th.start();
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == login_btn) {
            System.out.println("로그인 버튼 클릭");
            if (ip_tf.getText().length() == 0) // 9800
            {
                ip_tf.setText("IP를 입력해주세요");
                ip_tf.requestFocus();
            } else if (port_tf.getText().length() == 0) {
                port_tf.setText("Port를 입력하세요");
                port_tf.requestFocus();
            } else if (id_tf.getText().length() == 0) {
                id_tf.setText("ID를 입력하세요");
                ip_tf.requestFocus();
            } else {
                IP = ip_tf.getText().trim(); // ip를 받아오는 부분
                port = Integer.parseInt(port_tf.getText().trim()); // port를 받아오는 부분
                id = id_tf.getText().trim();
                network();
            }

        } else if (e.getSource() == notesend_btn) { // 6000
            System.out.println("쪽지 보내기 버튼 클릭");
            String user = User_List.getSelectedValue(); // 리스트에서 선택된 항목

            String note = JOptionPane.showInputDialog("보낼 메시지");
            if (note != null) {
                send_Msg("Note/" + user + "/" + note + "/."); // 예: Note/User2/나는 User1이야
            }
            System.out.println("받는 사람 : " + user + " | 보낼 데이터 : " + note);
        } else if (e.getSource() == joinroom_btn) { // 7400
            System.out.println("채팅방참여 버튼 클릭");
            String room = (String) Room_List.getSelectedValue(); // 리스트에서 선택된 항목
            if (room != null) {
                send_Msg("Join_Room/" + room);
                exitRoom_btn.setEnabled(true);	// 영원: 방나가기 버튼 활성화
            }
        } else if (e.getSource() == create_room_btn) { // 7000
            String room_name = JOptionPane.showInputDialog("방 이름");
            if (room_name != null) {
            	int room_CheckPW = JOptionPane.showConfirmDialog(null, "비밀번호를 설정하시겠습니까?", "Check", JOptionPane.YES_NO_OPTION);	//준영 : 비밀번호 설정 여부
            	if(room_CheckPW == 0) {	//준영 : 비밀번호 설정 시
            		String room_pw = JOptionPane.showInputDialog("비밀번호");
            		System.out.println("비밀번호 : " + "CreateRoom/" + room_name + "/PassWord/" + room_pw);
            		send_Msg("CreateRoom/" + room_name + "/PassWord/" + room_pw);
            		
            	} else {			//준영 : 비밀번호 미설정 시
            		send_Msg("CreateRoom/" + room_name + "/./.");
            	}
            }
            System.out.println("방만들기 버튼 클릭");
        } else if (e.getSource() == exitRoom_btn) { // 영원: 숫자 머임??
        	System.out.println("방나가기 버튼 클릭");
            send_Msg("ExitRoom/" + My_Room + "/." + "/.");
            
        } else if (e.getSource() == inviteRoom_btn && !id.equals(User_List.getSelectedValue())) { // 영원: 숫자 머임??
        	System.out.println("초대하기 버튼 클릭");
        	String user = User_List.getSelectedValue(); // 리스트에서 선택된 항목
            send_Msg("InviteRoom/" + user + "/" + My_Room + "/.");
            
        } else if (e.getSource() == send_btn) { // 8000
            System.out.println("전송 버튼 클릭");
            // send_Msg("전송 테스트 입니다"); // 4100
            if (!My_Room.isEmpty()) {
            	// 준영 : 전송시간 코드
            	SimpleDateFormat fm = new SimpleDateFormat("HH:mm:ss");
            	Date now = new Date();
            	String time = fm.format(now);            	
            	
                send_Msg("Chatting/" + My_Room + "/" + msg_tf.getText().trim() + "\t[" + time + "]" + "/"); //준영 : 시간출력 추가
                msg_tf.setText("");
                msg_tf.requestFocus();
            }
        }
    }

    private void send_Msg(String msg) { // 3000
        try {
            dos.writeUTF(msg);
        } catch (IOException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
    }

    private void recv_Msg(String str) { // 3000 //5100
        st = new StringTokenizer(str, "/");
        String protocol = st.nextToken();
        String Message = st.nextToken();
        System.out.println("프로토콜 : " + protocol);
        System.out.println("내용 : " + Message);
        if (protocol.equals("NewUser")) {
            user_list.add(Message); // Message == clientID
//         User_List.setListData(user_list);
            System.out.println(id + "   " + user_list);
        } else if (protocol.equals("OldUser")) {
            user_list.add(Message); // Message == clientID
//         User_List.setListData(user_list);
            System.out.println(id + "   " + user_list);
        } else if (protocol.equals("NoteS")) {
            String note = st.nextToken();
            System.out.println(Message + " 사용자로부터 온 쪽지 " + note); // Message는 note를 전송하는 user
            JOptionPane.showMessageDialog(null, note, Message + "님으로부터 쪽지", JOptionPane.CLOSED_OPTION);

        } else if (protocol.equals("InviteRoom")) { // 영원: 초대하기 프로토콜 받기
        	System.out.println("client");
            String msg = "초대 (방이름: " + Message + ")";
            System.out.println("사용자로부터 온 초대 (방이름: " + Message + ")"); // Message는 note를 전송하는 user
            
            int result = JOptionPane.showConfirmDialog(null, msg, "초대가 도착했습니다.", JOptionPane.YES_NO_OPTION, JOptionPane.INFORMATION_MESSAGE, null);
            if(result == JOptionPane.CLOSED_OPTION) { // 영원: 아무행동도 안함
            	
            }
            else if(result == JOptionPane.YES_OPTION) { // 영원: 해당 방으로 join
            	send_Msg("Join_Room/" + Message + "/." + "/.");
            }
            else if(result == JOptionPane.NO_OPTION) { // 영원: 아무행동도 안함
            	
            }

        } else if (protocol.equals("CreateRoomFail")) // 방 만드는 것을 실패 //9800
        {
            JOptionPane.showMessageDialog(null, "방만들기 실패", "알림", JOptionPane.ERROR_MESSAGE);

        } else if (protocol.equals("CreateRoom")) // 7100 서버가 CreateRoom, New_Room 동시에서 전송
        {
        	joinroom_btn.setEnabled(false);		//영원: 추가
        	create_room_btn.setEnabled(false);  //영원: 추가
        	exitRoom_btn.setEnabled(true);		//영원: 추가
        	inviteRoom_btn.setEnabled(true);	//영원: 추가
            msg_tf.setEditable(true); // 9100
            send_btn.setEnabled(true); // 9100
            My_Room = Message;
            Chat_area.append(id + "님이 " + My_Room + "을 생성 및 가입하였습니다.\n"); // 7500
        } else if (protocol.equals("New_Room")) // 7100
        {
            //joinroom_btn.setEnabled(true);    //9820	// 영원: 주석처리
            roomListVC.add(Message);
            Room_List.setListData(roomListVC);
            setTitle("사용자: "+id +"  채팅방: " + Message);      //9820
            System.out.println(id + "   " + user_list);

        } else if (protocol.equals("Old_Room")) // 7200
        {
            joinroom_btn.setEnabled(true);    //9820
            roomListVC.add(Message);
            Room_List.setListData(roomListVC);
            System.out.println(id + "   " + Message);
        } else if (protocol.equals("Delete_Room")) // 영원: 사용자가 방을 다나가면 해당 방이 사라짐
        {
            roomListVC.remove(Message);
            Room_List.setListData(roomListVC);
            setTitle("사용자: "+id);      //9820
            System.out.println(id + "   " + user_list);

        }
        else if (protocol.equals("Join_Room")) // 7500  Join한 사용자에게 전송
        {
            msg_tf.setEditable(true); //9100
            send_btn.setEnabled(true); //9100
            joinroom_btn.setEnabled(false); //9100
            create_room_btn.setEnabled(false); //9100
            exitRoom_btn.setEnabled(true);		//영원: 추가
            inviteRoom_btn.setEnabled(true);	//영원: 추가
            My_Room = Message;
            setTitle("사용자: "+id +"   채팅방: " + Message);      //9820
            Chat_area.append(id + "님이 " + My_Room + "에 가입하였습니다.\n"); // id+메시지
            JOptionPane.showMessageDialog(null, "채팅방 가입 성공", "알림", JOptionPane.INFORMATION_MESSAGE);   //9700

        } else if (protocol.equals("Join_Room_B")) // 7500
        {
            String msg = st.nextToken();
            Chat_area.append(Message + " : " + msg + "\n"); // id+메시지
        } else if (protocol.equals("User_out")) // 7600
        {
            user_list.remove(Message);
//         User_List.setListData(user_list);
            System.out.println(id + "   " + Message);
            // 탈퇴자 정보 display
            Chat_area.append(Message + "님 탈퇴 \n");
            // 같은 room에 가입한 경우 탈퇴 정보
        } else if (protocol.equals("Chatting")) // 8100
        {
            String msg = st.nextToken();
            msg = st.nextToken();
            msg = st.nextToken();
            msg = st.nextToken();	//준영: 이시발 개같은거 이렇게안하면 비밀번호코드 다시 처음부터해야함
            Chat_area.append(Message + " : " + msg + "\n"); // id+메시지
        } else if (protocol.equals("ExitRoom")) // 영원: 방나가기 마무리
        {
            Room_List.setListData(roomListVC);
        	
        	joinroom_btn.setEnabled(true);
        	create_room_btn.setEnabled(true);
        	exitRoom_btn.setEnabled(false);
        	inviteRoom_btn.setEnabled(false);
            msg_tf.setEditable(false);
            send_btn.setEnabled(false);
        }else if (protocol.equals("Server_Out")) // 9000
        {
            System.out.println("Server_out~~~~~~~~");
            stopped = true;
            try {
                socket.close();
                user_list.removeAllElements();

                if (My_Room != null && !My_Room.isEmpty()) {
                    roomListVC.removeAllElements();
                }
            } catch (IOException e) {
                // TODO Auto-generated catch block
                e.printStackTrace();
            }
            System.exit(0);
        }
        else if (protocol.equals("user_list_update")) { //9300
            User_List.setListData(user_list);
        }
        else if (protocol.equals("room_list_update")) // 9300
        {
            Room_List.setListData(roomListVC);
        }else if(protocol.equals("RequestPW")) { //준영 : 패스워드요청
        	String pw = JOptionPane.showInputDialog("비밀번호");
        	send_Msg("SendPW/" + pw + "/RoomName/" + Message);	// 준영 : 입력한 비밀번호 전송
        }else if(protocol.equals("DifferentPW")) {//준영 : 비밀번호 틀림
        	JOptionPane.showMessageDialog(null, "비밀번호가 틀렸습니다.", "알림", JOptionPane.PLAIN_MESSAGE);
        	exitRoom_btn.setEnabled(false);
        }
    }

    @Override
    public void keyPressed(KeyEvent e) {
        // TODO Auto-generated method stub
    }

    @Override
    public void keyReleased(KeyEvent e) { // 8200
        if (e.getKeyCode() == 10) {
            if (!My_Room.isEmpty()) {
                send_Msg("Chatting/" + My_Room + "/" + msg_tf.getText().trim() + "/.");
                msg_tf.setText("");
                msg_tf.requestFocus();
            }

        }

    }

    @Override
    public void keyTyped(KeyEvent e) {
        // TODO Auto-generated method stub

    }

    public static void main(String[] args) {
        new ClientSend();
    }

}