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
			System.out.println("���� ������ " + st.countTokens());
		}
		System.out.println("�����մϴ�...");
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
		System.out.println("����");
		*/
		
		/*
		Scanner scan = new Scanner(System.in);
		String str = scan.nextLine();
		StringTokenizer st = new StringTokenizer(str, "+");
		int sum = 0;
		while(st.hasMoreTokens()) {
			sum = sum + Integer.parseInt(st.nextToken().trim());
		}
		System.out.println("���� " + sum);
		*/
		
		
		/*
		final int SCISSORS = 1;
		final int ROCK = 2;
		final int PAPER = 3;
		Scanner scan = new Scanner(System.in);
		
		while(true) {
			System.out.print("����(1), ����(2), ��(3), ������(4)>>");
			int user = scan.nextInt();
			if(user == 4) break;
			int com = (int)(Math.random()*3+1);
			
			if(user == SCISSORS) System.out.print("����� ���� : ");
			else if(user == ROCK) System.out.print("����� ���� : ");
			else if(user == PAPER) System.out.print("����� �� : ");
			if(com == SCISSORS) System.out.println("��ǻ�� ����");
			else if(com == ROCK) System.out.println("��ǻ�� ����");
			else if(com == PAPER) System.out.println("��ǻ�� ��");
			
			if(user == SCISSORS) {
				if(com == SCISSORS)
					System.out.println("�����ϴ�.");
				else if(com == ROCK)
					System.out.println("����ڰ� �����ϴ�.");
				else if(com == PAPER)
					System.out.println("����ڰ� �̰���ϴ�.");
			}
			else if(user == ROCK) {
				if(com == SCISSORS)
					System.out.println("����ڰ� �̰���ϴ�.");
				else if(com == ROCK)
					System.out.println("�����ϴ�.");
				else if(com == PAPER)
					System.out.println("����ڰ� �����ϴ�.");
			}
			else if(user == PAPER) {
				if(com == SCISSORS)
					System.out.println("����ڰ� �����ϴ�.");
				else if(com == ROCK)
					System.out.println("����ڰ� �̰���ϴ�.");
				else if(com == PAPER)
					System.out.println("�����ϴ�.");
			}	
		}
		System.out.println("������ �����մϴ�...");
		*/
		
		StringBuffer st = new StringBuffer("abcd");
		if(st.charAt(0) == 'a') System.out.println("yes");
		st.replace(0, 1, "X");
		System.out.println(st);
		
		
		
		
		
	}
}
