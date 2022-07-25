package chapter06;
import java.util.Scanner;
import java.util.StringTokenizer;

/*
class MyPoint{
	private int a, b;
	
	MyPoint(int a, int b){
		this.a = a;
		this.b = b;
	}
	
	public String toString() {
		return "MyPoint(" + a + "," + b + ")";
	}
}
*/

public class Main {
	public static void main(String[] args) {
		/*
		MyPoint a = new MyPoint(3, 20);
		System.out.println(a);
		*/
		
		
		/*
		Scanner scan = new Scanner(System.in);
		String line;
		
		while(true) {
			line = scan.nextLine();
			StringTokenizer st = new StringTokenizer(line, " ");
			if(line.equals("exit"))
				break;
			System.out.println("어절 개수는 " + st.countTokens());
		}
		System.out.println("종료합니다...");
		*/
		
		
		/*
		int num[] = new int[3];
		while(true) {
			for(int i=0; i<3; i++) {
				num[i] = (int)(Math.random()*3+1);
				System.out.print(num[i] + "    ");
			}
			System.out.println();
			if(num[0] == num[1] && num[1] == num[2])
				break;
		}
		System.out.println("성공");
		*/
		
		/*
		Scanner scan = new Scanner(System.in);
		String str = scan.nextLine();
		StringTokenizer st = new StringTokenizer(str, "+");
		int sum = 0;
		while(st.hasMoreTokens()) {
			sum = sum + Integer.parseInt(st.nextToken().trim());
		}
		System.out.println("합은 " + sum);
		*/
		
		
		/*
		final int SCISSORS = 1;
		final int ROCK = 2;
		final int PAPER = 3;
		Scanner scan = new Scanner(System.in);
		
		while(true) {
			System.out.print("가위(1), 바위(2), 보(3), 끝내기(4)>>");
			int user = scan.nextInt();
			if(user == 4) break;
			int com = (int)(Math.random()*3+1);
			
			if(user == SCISSORS) System.out.print("사용자 가위 : ");
			else if(user == ROCK) System.out.print("사용자 바위 : ");
			else if(user == PAPER) System.out.print("사용자 보 : ");
			if(com == SCISSORS) System.out.println("컴퓨터 가위");
			else if(com == ROCK) System.out.println("컴퓨터 바위");
			else if(com == PAPER) System.out.println("컴퓨터 보");
			
			if(user == SCISSORS) {
				if(com == SCISSORS)
					System.out.println("비겼습니다.");
				else if(com == ROCK)
					System.out.println("사용자가 졌습니다.");
				else if(com == PAPER)
					System.out.println("사용자가 이겼습니다.");
			}
			else if(user == ROCK) {
				if(com == SCISSORS)
					System.out.println("사용자가 이겼습니다.");
				else if(com == ROCK)
					System.out.println("비겼습니다.");
				else if(com == PAPER)
					System.out.println("사용자가 졌습니다.");
			}
			else if(user == PAPER) {
				if(com == SCISSORS)
					System.out.println("사용자가 졌습니다.");
				else if(com == ROCK)
					System.out.println("사용자가 이겼습니다.");
				else if(com == PAPER)
					System.out.println("비겼습니다.");
			}	
		}
		System.out.println("게임을 종료합니다...");
		*/
		
		StringBuffer st = new StringBuffer("abcd");
		if(st.charAt(0) == 'a') System.out.println("yes");
		st.replace(0, 1, "X");
		System.out.println(st);
		
		
		
		
		
	}
}
