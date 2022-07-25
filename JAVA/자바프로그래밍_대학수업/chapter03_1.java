package chapter03;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		/*
		String eng[] = {"student", "love", "java", "happy", "future"};
		String kor[] = {"학생", "사랑", "자바", "행복한", "미래"};
		while(true) {
			System.out.print("영어 단어를 입력하세요>>");
			Scanner scan = new Scanner(System.in);
			String str = scan.next();
			
			if(str.equals("exit")) {
				System.out.println("종료합니다.");
				break;
			}
			
			switch(str) {
			case "student": System.out.println("학생"); break;
			case "love": System.out.println("사랑"); break;
			case "java": System.out.println("자바"); break;
			case "happy": System.out.println("행복한"); break;
			case "future": System.out.println("미래"); break;
			default: System.out.println("그런 영어 단어가 없습니다.");
			}
		}
		*/
		
		
		/*
		int cnt=0;
		for(int i=1; i<100; i++) {
			if((i/10 > 0) && (i/10%3 == 0)) {
				cnt++;
			}
			
			if((i%10%3 == 0) && (i%10 > 0)) {
				cnt++;
			}
			
			if(cnt == 1) {
				System.out.println(i + "박수한번");
			}
			else if(cnt == 2) {
				System.out.println(i + "박수두번");
			}
			
			cnt = 0;
		}
		*/
		
		
		/*
		String str[] = {"가위", "바위", "보"};
		int n = (int)(Math.random()*3);
		
		System.out.println("컴퓨터와 가위 바위 보 게임을 합니다.");
		
		while(true) {
			System.out.print("가위 바위 보!>>");
			Scanner scan = new Scanner(System.in);
			String str1 = scan.next();
			
			if(str1.equals("그만")) {
				System.out.println("게임을 종료합니다...");
				break;
			}
			
			if(str1.equals("가위")) {
				switch(n) {
				case 0: System.out.println("사용자 = 가위 , 컴퓨터 = 가위, 비겼습니다."); break;
				case 1: System.out.println("사용자 = 가위 , 컴퓨터 = 바위, 컴퓨터가 이겼습니다."); break;
				case 2: System.out.println("사용자 = 가위 , 컴퓨터 = 보, 사용자가 이겼습니다."); break;
				}
			}
			else if(str1.equals("바위")) {
				switch(n) {
				case 0: System.out.println("사용자 = 바위 , 컴퓨터 = 가위, 사용자가 이겼습니다."); break;
				case 1: System.out.println("사용자 = 바위 , 컴퓨터 = 바위, 비겼습니다."); break;
				case 2: System.out.println("사용자 = 바위 , 컴퓨터 = 보, 컴퓨터가 이겼습니다."); break;
				}
			}
			else if(str1.equals("보")) {
				switch(n) {
				case 0: System.out.println("사용자 = 보 , 컴퓨터 = 가위, 컴퓨터가 이겼습니다."); break;
				case 1: System.out.println("사용자 = 보 , 컴퓨터 = 바위, 사용자가 이겼습니다."); break;
				case 2: System.out.println("사용자 = 보 , 컴퓨터 = 보, 비겼습니다."); break;
				}
			}
		}
		*/
		
		
		/*
		// 교수님이 수업시간에 해보래서 혹시 시킬까봐 해놈
		int sum = 0;
		for(int i=1; i<11; i++) {
			sum = sum + i;
			System.out.print(i + "+");
		}
		System.out.println("=" + sum);
		*/		                     
	}
}
