package chapter03;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		/*
		String eng[] = {"student", "love", "java", "happy", "future"};
		String kor[] = {"�л�", "���", "�ڹ�", "�ູ��", "�̷�"};
		while(true) {
			System.out.print("���� �ܾ �Է��ϼ���>>");
			Scanner scan = new Scanner(System.in);
			String str = scan.next();
			
			if(str.equals("exit")) {
				System.out.println("�����մϴ�.");
				break;
			}
			
			switch(str) {
			case "student": System.out.println("�л�"); break;
			case "love": System.out.println("���"); break;
			case "java": System.out.println("�ڹ�"); break;
			case "happy": System.out.println("�ູ��"); break;
			case "future": System.out.println("�̷�"); break;
			default: System.out.println("�׷� ���� �ܾ �����ϴ�.");
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
				System.out.println(i + "�ڼ��ѹ�");
			}
			else if(cnt == 2) {
				System.out.println(i + "�ڼ��ι�");
			}
			
			cnt = 0;
		}
		*/
		
		
		/*
		String str[] = {"����", "����", "��"};
		int n = (int)(Math.random()*3);
		
		System.out.println("��ǻ�Ϳ� ���� ���� �� ������ �մϴ�.");
		
		while(true) {
			System.out.print("���� ���� ��!>>");
			Scanner scan = new Scanner(System.in);
			String str1 = scan.next();
			
			if(str1.equals("�׸�")) {
				System.out.println("������ �����մϴ�...");
				break;
			}
			
			if(str1.equals("����")) {
				switch(n) {
				case 0: System.out.println("����� = ���� , ��ǻ�� = ����, �����ϴ�."); break;
				case 1: System.out.println("����� = ���� , ��ǻ�� = ����, ��ǻ�Ͱ� �̰���ϴ�."); break;
				case 2: System.out.println("����� = ���� , ��ǻ�� = ��, ����ڰ� �̰���ϴ�."); break;
				}
			}
			else if(str1.equals("����")) {
				switch(n) {
				case 0: System.out.println("����� = ���� , ��ǻ�� = ����, ����ڰ� �̰���ϴ�."); break;
				case 1: System.out.println("����� = ���� , ��ǻ�� = ����, �����ϴ�."); break;
				case 2: System.out.println("����� = ���� , ��ǻ�� = ��, ��ǻ�Ͱ� �̰���ϴ�."); break;
				}
			}
			else if(str1.equals("��")) {
				switch(n) {
				case 0: System.out.println("����� = �� , ��ǻ�� = ����, ��ǻ�Ͱ� �̰���ϴ�."); break;
				case 1: System.out.println("����� = �� , ��ǻ�� = ����, ����ڰ� �̰���ϴ�."); break;
				case 2: System.out.println("����� = �� , ��ǻ�� = ��, �����ϴ�."); break;
				}
			}
		}
		*/
		
		
		/*
		// �������� �����ð��� �غ����� Ȥ�� ��ų��� �س�
		int sum = 0;
		for(int i=1; i<11; i++) {
			sum = sum + i;
			System.out.print(i + "+");
		}
		System.out.println("=" + sum);
		*/		                     
	}
}
