package chapter04;
import java.util.Scanner;

/*//p.179
class Player{
	String name="";
	
	String getWordFromUser() {
		System.out.print(name + ">>");
		Scanner scan = new Scanner(System.in);
		String str2 = scan.next();
		return str2;
	}
	
	static boolean checkSuccess(String str1, String str2) {
		int lastIndex = str1.length()-1;
		char ch1 = str1.charAt(lastIndex);
		char ch2 = str2.charAt(0);
		
		if(ch1 == ch2) return true;
		else return false;
	}
}
*/


/*
class Song{
	String title;
	
	Song(String title){
		this.title = title;
	}
	
	String getTitle() {
		return title;
	}
}
*/


/**/
class Phone{
	private String name, tel;
	public Phone(String name, String tel) {
		this.name = name;
		this.tel = tel;
	}
	public String getName() {return name;}
	public String getTel() {return tel;}
}



/*
class Rect{
	private int width, height;
	public Rect(int width, int height) {
		this.width = width;
		this.height = height;
	}
	public int getArea() { return width*height; }
}
*/


/*
class PhoneManager{
	Phone arr[];
	
	PhoneManager(Phone arr[]){
		this.arr = arr;
	}
	
	public void search(String name) {
		int len = arr.length;
		for(int i=0; i<len; i++) {
			if(name.equals(arr[i].getName())) {
				System.out.println(arr[i].getName() + "�� ��ȣ�� " + arr[i].getTel() + " �Դϴ�.");
			}
		}
		System.out.println(name + " �� �����ϴ�.");
	}
}
*/


public class Main {
	/*//p.179
	public static void run(int num) {
		Player player[] = new Player[num];
		for(int i=0; i<num; i++) {
			player[i] = new Player();
		}
		
		Scanner scan = new Scanner(System.in);
		String name = "";
		for(int i=0; i<num; i++) {
			System.out.print("�������� �̸��� �Է��ϼ���>>");
			name = scan.next();
			player[i].name = name;
		}
		
		String str1 = "�ƹ���";
		System.out.println("�����ϴ� �ܾ�� �ƹ����Դϴ�.");
		
		boolean check;
		int i = 0;
		do {
			String str2 = player[i].getWordFromUser();
			check = Player.checkSuccess(str1, str2);
			str1 = str2;
			i++;
			i = i % num;
		}while(check);
		
		System.out.println(player[i-1].name + "�� �����ϴ�.");
	}
	*/
	
	public static void main(String[] args) {
		/*//p.179
		System.out.print("���ӿ� �����ϴ� �ο��� ����Դϱ�>>");
		Scanner scan = new Scanner(System.in);
		int num = scan.nextInt();
		
		run(num);
		*/
		
		
		/*
		Song mySong = new Song("Nessun Dorma");
		Song yourSong = new Song("���ִ� �� �� �̷��");
		System.out.println("�� �뷡�� " + mySong.getTitle());
		System.out.println("�� �뷡�� " + yourSong.getTitle());
		*/
		
		
		/*
		Scanner scan = new Scanner(System.in);
		System.out.print("�̸��� ��ȭ��ȣ �Է� >>");
		String str1 = scan.next();
		String str2 = scan.next();
		Phone val1 = new Phone(str1, str2);
		
		System.out.print("�̸��� ��ȭ��ȣ �Է� >>");
		str1 = scan.next();
		str2 = scan.next();
		Phone val2 = new Phone(str1, str2);
		
		//Phone val1 = new Phone("��������", "333-3333");
		//Phone val2 = new Phone("¡¡��", "999-9999");
		System.out.println(val1.getName() + "�� ��ȣ " + val1.getTel());
		System.out.println(val2.getName() + "�� ��ȣ " + val2.getTel());
		*/
		
		
		/*
		Scanner scan = new Scanner(System.in);
		Rect RectArray[] = new Rect[4];
		int n1;
		int n2;
		
		for(int i=0; i<4; i++) {
			System.out.print((i+1) + " �ʺ�� ���� >>");
			n1 = scan.nextInt();
			n2 = scan.nextInt();
			RectArray[i] = new Rect(n1, n2);
		}
		System.out.println("�����Ͽ����ϴ�...");
		
		int sum = 0;
		for(int i=0; i<4; i++) {
			sum = sum + RectArray[i].getArea();
		}
		System.out.println("�簢���� ��ü ���� " + sum);
		*/
		
		
		/*
		Scanner scan = new Scanner(System.in);
		System.out.print("�ο���>>");
		int num = scan.nextInt();
		
		String str1, str2;
		Phone phone[] = new Phone[num];
		for (int i=0; i<num; i++) {
			System.out.print("�̸��� ��ȭ��ȣ(��ȣ�� ���������� �Է�)>>");
			str1 = scan.next();
			str2 = scan.next();
			phone[i] = new Phone(str1, str2);
		}
		System.out.println("����Ǿ����ϴ�...");
		
		PhoneManager mn = new PhoneManager(phone);
		String name;
		do {
			System.out.print("�˻��� �̸�>>");
			 name = scan.next();
			mn.search(name);
		}while(!name.equals("exit"));
		System.out.println("���α׷��� �����մϴ�...");
		*/
		
		
		/**/
		/**/
		/**/
		/**/
		/**/
	}
}
