package ChatServer;

import javax.swing.*;
import javax.swing.border.EmptyBorder;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.*;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.StringTokenizer;
import java.util.Vector;

public class ServerSend extends JFrame implements ActionListener {

    private final JTextArea textArea = new JTextArea();
    private final JButton start_btn = new JButton("서버 실행");
    private final JButton stop_btn = new JButton("서버 중지");

    // 기타 변수 관리
    private final Vector<UserInfo> user_vc = new Vector<>();
    private final Vector<RoomInfo> room_vc = new Vector<>();
    int port = 12345;
    StringTokenizer st;

    // 자동 import 단축키 ctrl+shift+o 자동 채우기 ctrl+space
    private JPanel contentPane; // GUI Member 1011

    // Stream 변수 //3000
    private JTextField port_tf;

    // socket 생성 연결 부분
    private ServerSocket server_socket;
    private Socket socket;
    private boolean create_room_ok = true;
    private boolean stop_server = false;

    // 생성자
    ServerSend() {
        init(); // GUI 초기화, 화면 생성
        start(); // 리스너 설정 메소드
    }

    public static void main(String[] args) { // 1000
        new ServerSend();
    }

    private void init()
    {
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setBounds(30, 100, 360, 360);
        contentPane = new JPanel();
        contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
        setContentPane(contentPane);
        contentPane.setLayout(null);

        JLabel label_ser = new JLabel("포트 번호");
        label_ser.setBounds(20, 240, 60, 16);
        contentPane.add(label_ser);

        port_tf = new JTextField();
        port_tf.setBounds(100, 240, 220, 24);
        contentPane.add(port_tf);
        port_tf.setColumns(10);

        JScrollPane scrollPane = new JScrollPane();
        scrollPane.setBounds(20, 10, 300, 220);
        contentPane.add(scrollPane);

        scrollPane.setViewportView(textArea);
        textArea.setEditable(false);

        start_btn.setBounds(20, 280, 140, 24);
        contentPane.add(start_btn);

        stop_btn.setBounds(180, 280, 140, 24);
        contentPane.add(stop_btn);
        stop_btn.setEnabled(false);

        this.setVisible(true); // 화면 보이기
    }

    private void start()
    {
        start_btn.addActionListener(this);
        stop_btn.addActionListener(this);
    }

    private void Server_start()
    {
        try {
            port = 12345;
            port = Integer.parseInt(port_tf.getText().trim());
            server_socket = new ServerSocket(port); // 2200
        } catch (IOException e) {
            JOptionPane.showMessageDialog(null,
                    "이미 사용중인 포트", "알림", JOptionPane.ERROR_MESSAGE); //9700
        }
        if (server_socket != null) {
            stop_server = false;
            connection();
        }
    }

    public void connection() { // 2000

        Thread th = new Thread(new Runnable() {
            public void run() {
                while (stop_server!=true) { // 여러명
                    try {
                        textArea.append("사용자 접속 대기중\n");
                        socket = server_socket.accept();
                        textArea.append("클아이언트 접속 완료\n");
                        UserInfo user = new UserInfo(socket);
                        user.start();

                    } catch (IOException e) {

                    }
                }

            }
        });
        th.start();
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == start_btn) {
            System.out.println("Server Start button Click");
            Server_start(); // 소켓 생성 및 사용자 대기

            start_btn.setEnabled(false);
            port_tf.setEditable(false);
            stop_btn.setEnabled(true);

        } else if (e.getSource() == stop_btn) {
            System.out.println("Server Stop Button Click");

            for (int i = 0; i < user_vc.size(); i++) {
                UserInfo u = user_vc.elementAt(i);
                u.send_Msg("Server_Out/Bye");
                try {
                    u.is.close();
                    u.os.close();
                    u.dos.close();
                    u.dis.close();
                    u.clientSocket.close();

                } catch (IOException e1) {

                }
            }
            try {
                server_socket.close();
                stop_server = true;
                user_vc.removeAllElements();
                room_vc.removeAllElements();
            } catch (IOException e1) {

            }
            start_btn.setEnabled(true);
            port_tf.setEditable(true);
            stop_btn.setEnabled(false);
        }
    } // 액션 이벤트 끝

    class UserInfo extends Thread {
        private final Socket clientSocket;
        // Stream 변수
        private InputStream is;
        private DataInputStream dis;
        private OutputStream os;
        private DataOutputStream dos;
        private String userID = null;
        private String roomID = null;

        UserInfo(Socket socket) {
            this.clientSocket = socket;
            UserNetwork();
        }

        private void UserNetwork() {
            try {
                is = socket.getInputStream();
                dis = new DataInputStream(is);
                os = socket.getOutputStream();
                dos = new DataOutputStream(os);

                userID = dis.readUTF();
                textArea.append(userID + " 클라이언트 접속\n");

                // 연결되어 있는 클라이언트들에게 가입자 정보 전달
                System.out.println("현재 접속한 클라이언트 수 = "+ user_vc.size());
                for (int i = 0; i < user_vc.size(); i++) {         //5100
                    UserInfo u = user_vc.elementAt(i);
                    u.send_Msg("NewUser/"+ userID);
                    System.out.println("SEND NewUser");
                }

                //새로 접속한 클라이언트에게
                for(int i=0; i<user_vc.size();i++) {
                    UserInfo u = user_vc.elementAt(i);
                    send_Msg("OldUser/"+u.userID);
                }

                // 자신에게 기존의 개설된 채팅 방 정보 전송
                for (int i = 0; i < room_vc.size(); i++)
                {
                    RoomInfo r = room_vc.elementAt(i);
                    send_Msg("Old_Room/" + r.Room_name);
                }

                send_Msg("room_list_update/update");
                //새로 접속한 클라이언트 등록
                user_vc.add(this);

                broadCast("user_list_update/ ");
            } catch (IOException e) {
                JOptionPane.showMessageDialog(null, "Stream 설정 발생",
                        "알림", JOptionPane.ERROR_MESSAGE);  //9700
            }
        }

        @Override
        public void run() { // 4100
            System.out.println("start run");
            while (true) {
                try {
                    String msg = dis.readUTF();
                    System.out.println("read msg = "+ msg);
                    textArea.append(userID + "로부터 수신한 메시지: " + msg + "\n");
                    recv_Msg(msg);

                } catch (IOException e) {
                    // 클라이언트와 접속이 끊어지면
                    textArea.append(userID + " 사용자 접속 끊어짐\n");
                    try {
                        is.close();
                        os.close();
                        dos.close();
                        dis.close();
                        clientSocket.close();
                        user_vc.remove(this);
                        broadCast("User_out/" + userID);
                        broadCast("user_list_update/ ");

                        //room에서 탈퇴
                        for (int i = 0; i < room_vc.size(); i++) {
                            RoomInfo r = room_vc.elementAt(i);
                            if (r.Room_name.equals(roomID)) // 해당 방을 찾으면
                            {
                                r.Room_user_vc.remove(this);    // 채팅방에서 탈퇴
                                if(r.Room_user_vc.size()==0) {
                                    room_vc.remove(r);
                                }
                                break;
                            }
                        }
                    } catch (IOException e1) {
                    }
                    break;
                }
            }
        }

        public void recv_Msg(String str) {
            st = new StringTokenizer(str, "/");
            String protocol = st.nextToken();
            String Message = st.nextToken();
            System.out.println("프로토콜 : " + protocol);
            System.out.println("내용 : " + Message);
            if(protocol.equals("Note")) {
                // protocol = Note
                // message = user/~~~~~~
                String note = st.nextToken();

                System.out.println("받는 사람 : " + Message); // user->Msg
                System.out.println("보낼 쪽지 : " + note);

                // 백터에서 해당 사용자를 찾아서 메세지 전송
                for (int i = 0; i < user_vc.size(); i++) {
                    UserInfo u = user_vc.elementAt(i);
                    if (u.userID.equals(Message)) {
                        u.send_Msg("NoteS/" + userID + "/" + note);    // userID가 전송한다는 내용
                    }
                }
            } // Note if 문
            else if (protocol.equals("CreateRoom"))
            {
                // 1. 현재 같은 방이 있는지 확인 한다.
                for (int i = 0; i < room_vc.size(); i++) {
                    RoomInfo r = room_vc.elementAt(i);
                    if (r.Room_name.equals(Message)) // 동일한 이름의 방이 만들어져 있으면
                    {
                        send_Msg("CreateRoomFail/OK");
                        create_room_ok = false; // for문에서 계속 검사라는 것을 방지위하여
                        break;
                    }
                }
                if (create_room_ok) // 방을 만들 수 있을 때
                {

                    RoomInfo r = new RoomInfo(Message, this);      //Message == RoomName, 생성시에 room에 가입
                    room_vc.add(r); // 방을 추가
                    roomID = Message;
                    send_Msg("CreateRoom/" + Message);
                    broadCast("New_Room/" + Message); // 클라이언트에게 새로운 방 생성 통보
                }
                create_room_ok = true;


            } // CreateRoom
            else if (protocol.equals("Join_Room"))
            {
            	if(is==null) {
                    try {
    					is = socket.getInputStream();	// 영원: 방 입장시 채팅스트림 활성화
    	                dis = new DataInputStream(is);
    	                os = socket.getOutputStream();
    	                dos = new DataOutputStream(os);
    				} catch (IOException e) {
    					// TODO Auto-generated catch block
    					e.printStackTrace();
    				}
            	}
            	
                for (int i = 0; i < room_vc.size(); i++) {
                    RoomInfo r = room_vc.elementAt(i);
                    if (r.Room_name.equals(Message)) // 해당 방을 찾으면
                    {
                        r.BroadCast_Room("Join_Room_B/가입/***" + userID + "님이 입장하셨습니다.********");
                        r.Room_user_vc.add(this);    // 채팅방 가입, 사용자 추가
                        System.out.println(r.Room_user_vc.size());
                        roomID = Message;
                        send_Msg("Join_Room/" + Message); // Message(=방이름) 추가
                        break;
                    }
                }
            }
            else if (protocol.equals("ExitRoom"))	//영원: 방나가기 프로토콜 메시지 받음
            {
            	//room에서 탈퇴
                for (int i = 0; i < room_vc.size(); i++) {
                    RoomInfo r = room_vc.elementAt(i);
                    if (r.Room_name.equals(roomID)) // 해당 방을 찾으면
                    {
                    	r.BroadCast_Room("Join_Room_B/나가기/***" + userID + "님이 방을 나갔습니다.********");
                        r.Room_user_vc.remove(this);    // 채팅방에서 탈퇴
                        if(r.Room_user_vc.size()==0) {
                            room_vc.remove(r);
                            broadCast("Delete_Room/" + roomID);
                        }
                        break;
                    }
                }
                
                send_Msg("ExitRoom/" + roomID);
            }
            else if (protocol.equals("InviteRoom"))	//영원: 초대하기 프로토콜 메시지 받음
            {
            	// 백터에서 해당 사용자를 찾아서 초대장 전송
                for (int i = 0; i < user_vc.size(); i++) {
                    UserInfo u = user_vc.elementAt(i);
                    if (u.userID.equals(Message)) {
                        u.send_Msg("InviteRoom/" + roomID);    // userID가 전송한다는 내용
                    }
                }
            }
            else if (protocol.equals("Chatting"))
            {
                // chatting / 채팅방이름 / 메시지 전송
                String chatting_msg = st.nextToken();

                for (int i = 0; i < room_vc.size(); i++) {
                    RoomInfo r = room_vc.elementAt(i);
                    if (r.Room_name.equals(Message)) // 해당 방을 찾으면
                    {
                        r.BroadCast_Room("Chatting/" + userID + "/" + chatting_msg);
                    }
                }
            }
        }

        private void broadCast(String str) // 기존 사용자들에게 새로운 사용자 알림
        {

            for (int i = 0; i < user_vc.size(); i++) {
                UserInfo u = user_vc.elementAt(i);
                u.send_Msg(str);
            }

        }

        public void send_Msg(String msg) {
            try {
                dos.writeUTF(msg);
            } catch (IOException e) {         }
        }
    }

    class RoomInfo {
        private final Vector<UserInfo> Room_user_vc = new Vector<UserInfo>();
        private String Room_name="";

        RoomInfo(String name, UserInfo u) {
            this.Room_name = name;
            this.Room_user_vc.add(u);
        }

        public void BroadCast_Room(String str) {
            for (int i = 0; i < Room_user_vc.size(); i++) {
                UserInfo u = Room_user_vc.elementAt(i);
                u.send_Msg(str);
            }
        }
    }
}