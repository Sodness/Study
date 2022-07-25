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
				System.out.println(arr[i].getName() + "의 번호는 " + arr[i].getTel() + " 입니다.");
			}
		}
		System.out.println(name + " 이 없습니다.");
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
			System.out.print("참가자의 이름을 입력하세요>>");
			name = scan.next();
			player[i].name = name;
		}
		
		String str1 = "아버지";
		System.out.println("시작하는 단어는 아버지입니다.");
		
		boolean check;
		int i = 0;
		do {
			String str2 = player[i].getWordFromUser();
			check = Player.checkSuccess(str1, str2);
			str1 = str2;
			i++;
			i = i % num;
		}while(check);
		
		System.out.println(player[i-1].name + "이 졌습니다.");
	}
	*/
	
	public static void main(String[] args) {
		/*//p.179
		System.out.print("게임에 참가하는 인원은 몇명입니까>>");
		Scanner scan = new Scanner(System.in);
		int num = scan.nextInt();
		
		run(num);
		*/
		
		
		/*
		Song mySong = new Song("Nessun Dorma");
		Song yourSong = new Song("공주는 잠 못 이루고");
		System.out.println("내 노래는 " + mySong.getTitle());
		System.out.println("너 노래는 " + yourSong.getTitle());
		*/
		
		
		/*
		Scanner scan = new Scanner(System.in);
		System.out.print("이름과 전화번호 입력 >>");
		String str1 = scan.next();
		String str2 = scan.next();
		Phone val1 = new Phone(str1, str2);
		
		System.out.print("이름과 전화번호 입력 >>");
		str1 = scan.next();
		str2 = scan.next();
		Phone val2 = new Phone(str1, str2);
		
		//Phone val1 = new Phone("스폰지밥", "333-3333");
		//Phone val2 = new Phone("징징이", "999-9999");
		System.out.println(val1.getName() + "의 번호 " + val1.getTel());
		System.out.println(val2.getName() + "의 번호 " + val2.getTel());
		*/
		
		
		/*
		Scanner scan = new Scanner(System.in);
		Rect RectArray[] = new Rect[4];
		int n1;
		int n2;
		
		for(int i=0; i<4; i++) {
			System.out.print((i+1) + " 너비와 높이 >>");
			n1 = scan.nextInt();
			n2 = scan.nextInt();
			RectArray[i] = new Rect(n1, n2);
		}
		System.out.println("저장하였습니다...");
		
		int sum = 0;
		for(int i=0; i<4; i++) {
			sum = sum + RectArray[i].getArea();
		}
		System.out.println("사각형의 전체 합은 " + sum);
		*/
		
		
		/*
		Scanner scan = new Scanner(System.in);
		System.out.print("인원수>>");
		int num = scan.nextInt();
		
		String str1, str2;
		Phone phone[] = new Phone[num];
		for (int i=0; i<num; i++) {
			System.out.print("이름과 전화번호(번호는 연속적으로 입력)>>");
			str1 = scan.next();
			str2 = scan.next();
			phone[i] = new Phone(str1, str2);
		}
		System.out.println("저장되었습니다...");
		
		PhoneManager mn = new PhoneManager(phone);
		String name;
		do {
			System.out.print("검색할 이름>>");
			 name = scan.next();
			mn.search(name);
		}while(!name.equals("exit"));
		System.out.println("프로그램을 종료합니다...");
		*/
		
		
		/**/
		/**/
		/**/
		/**/
		/**/
	}
}
