package test;
import java.util.Scanner;

public class Test {
	public static void main(String[] args) {
		/*
		int x = 2, y = 10, z = 0;
		//z = x++*2   +   --y   -5   +   x*(y%2);
		//z = x++*2   +   --y   -5;
		z = (x++*2   +   --y   -5   +   x*(y%2));
		System.out.println(z);
		
		int x1 = 2, y1 = 10, z1 = 0;
		z1 = x1++*2;
		System.out.println(z1);
		System.out.println(--y1);
		int x2 = 2, y2 = 10, z2 = 0;
		System.out.println(x2*(y2%2));
		*/
		
		
		/*
		System.out.println("���� ���� �� �����Դϴ�. ����, ����, �� �߿��� �Է��ϼ���");
		System.out.print("ö�� >> ");
		Scanner scanner = new Scanner(System.in);
		String str1 = scanner.next();
		System.out.print("���� >> ");
		String str2 = scanner.next();
		
		if (str1.equals("����")) {
			if(str2.equals("����")) {
				System.out.println("�����ϴ�.");
			}
			else if(str2.equals("����")) {
				System.out.println("���� �̰���ϴ�.");
			}
			else if(str2.equals("��")) {
				System.out.println("ö���� �̰���ϴ�.");
			}
		}
		else if(str1.equals("����")) {
			if(str2.equals("����")) {
				System.out.println("ö���� �̰���ϴ�.");
			}
			else if(str2.equals("����")) {
				System.out.println("�����ϴ�.");
			}
			else if(str2.equals("��")) {
				System.out.println("���� �̰���ϴ�.");
			}
		}
		else if(str1.equals("��")) {
			if(str2.equals("����")) {
				System.out.println("���� �̰���ϴ�.");
			}
			else if(str2.equals("����")) {
				System.out.println("ö���� �̰���ϴ�.");
			}
			else if(str2.equals("��")) {
				System.out.println("�����ϴ�.");
			}
		}
		
		scanner.close();
		*/
		
		
		/*
		var a1 = 67+12.8;
		var a2 = 'c' + 1;
		var a3 = 10/3;
		var a4 = 10.0/3;
		var a5 = 10==9;
		System.out.println(a5);
		*/
		
		
		/*
		Scanner scanner = new Scanner(System.in);
		System.out.print("�� ������ �Է��ϼ���>>");
		int a = scanner.nextInt();
		int b = scanner.nextInt();
		System.out.println(a + "+" + b + "�� " + (a+b));
		*/
		
		
		/*
		System.out.print("�� ������ �Է��ϼ���>>");
		Scanner scanner = new Scanner(System.in);
		int a = scanner.nextInt();
		System.out.println((155*5) + "m �Դϴ�.");
		*/
		
		
		/*
		System.out.print("x ���� �Է��ϼ���>>");
		Scanner scanner = new Scanner(System.in);
		int x = scanner.nextInt();
		int y = x*x - 3*x + 7;
		System.out.println("x=" + x + ", y=" + y);
		*/
		
		
		/*
		System.out.print("�� (x,y)�� ��ǥ�� �Է��ϼ���>>");
		Scanner scanner = new Scanner(System.in);
		int x = scanner.nextInt();
		int y = scanner.nextInt();
		
		if (50 <= x && x <= 100) {
			if (50 <= y && y <= 100) {
				System.out.println("��(" + x + "," + y + ")�� (50, 50)�� (100,100)�� �簢�� ���� �ֽ��ϴ�.");
			}
		}
		*/
		
		
		/*
		System.out.print("�� ������ �Է��ϼ���>>");
		Scanner scanner = new Scanner(System.in);
		boolean a = scanner.nextBoolean();
		String n = scanner.next();
		boolean b = scanner.nextBoolean();
		
		switch(n) {
		case "AND": System.out.println(a && b); break;
		case "OR": System.out.println(a || b); break;
		default: System.out.println("x");
		}
		*/
		
		
		/*
		System.out.print("���� �׼��� �Է��ϼ���>>");
		Scanner scanner = new Scanner(System.in);
		int won = scanner.nextInt();
		int won50000 = won / 50000;
		int won10000 = won % 50000 / 10000;
		int won1000 = won % 10000 / 1000;
		int won500 = won % 1000 / 500;
		int won100 = won % 500 / 100;
		int won10 = won % 100 / 10;
		int won1 = won % 10;
		System.out.println("������" + won50000 + "��, "
				+ "����" + won10000 + "��, "
				+ "õ��" + won1000 + "��, "
				+ "500��" + won500 + "��, "
				+ "100��" + won100 + "��, "
				+ "10��" + won10 + "��, "
				+ "1��" + won1 + "��, ");
		*/
		
		
		/*
		System.out.print("������ �Է��ϼ���>>");
		Scanner scanner = new Scanner(System.in);
		String grade = scanner.next();
		switch(grade) {
		case "A": System.out.print("Excellent"); break;
		case "B": System.out.print("Excellent"); break;
		case "C": System.out.print("Good"); break;
		case "D": System.out.print("Good"); break;
		case "F": System.out.print("Bye"); break;
		}
		*/
		
		
		/*
		System.out.print("Ŀ�� �ֹ��ϼ���>>");
		Scanner scanner = new Scanner(System.in);
		String coffee = scanner.next();
		int num = scanner.nextInt();
		
		if(coffee.equals("����������")) {
			System.out.println((2000*num) + "���Դϴ�.");
		}
		else if(coffee.equals("�Ƹ޸�ī��")) {
			System.out.println((2500*num) + "���Դϴ�.");
		}
		else if(coffee.equals("īǪġ��")) {
			System.out.println((3000*num) + "���Դϴ�.");
		}
		else if(coffee.equals("ī���")) {
			System.out.println((3500*num) + "���Դϴ�.");
		}
		
		switch(coffee) {
		case "����������": System.out.println((2000*num) + "���Դϴ�."); break;
		case "�Ƹ޸�ī��": System.out.println((2500*num) + "���Դϴ�."); break;
		case "īǪġ��": System.out.println((3000*num) + "���Դϴ�."); break;
		case "ī���": System.out.println((3500*num) + "���Դϴ�."); break;
		}
		*/
		
		
		/*
		System.out.print("1~99 ������ ������ �Է��ϼ���>>");
		Scanner scanner = new Scanner(System.in);
		int num = scanner.nextInt();
		
		int n10 = num / 10;
		int n1 = num % 10;
		if ((n10 % 3 == 0) && (n1 % 3 == 0) && (n1 != 0) && (n10 != 0)) {
			System.out.println("�ڼ�¦¦");
		}
		else if((n10 % 3 == 0) || (n1 % 3 == 0) && (n1 != 0) && (n10 != 0)) {
			System.out.println("�ڼ�¦");
		}
		else {
			System.out.println("�ڼ�����");
		}
		*/
		
		
		/*
		System.out.print("Ŀ�� �ֹ��ϼ���>>");
		Scanner scanner = new Scanner(System.in);
		String coffee = scanner.next();
		int num = scanner.nextInt();
		
		if(coffee.equals("����������")) {
			if(10 <= num) {
				System.out.println((int)(2000*num*0.95) + "���Դϴ�.");
			}
			else {
				System.out.println((2000*num) + "���Դϴ�.");
			}
		}
		else if(coffee.equals("�Ƹ޸�ī��")) {
			System.out.println((2500*num) + "���Դϴ�.");
		}
		else if(coffee.equals("īǪġ��")) {
			System.out.println((3000*num) + "���Դϴ�.");
		}
		else if(coffee.equals("ī���")) {
			System.out.println((3500*num) + "���Դϴ�.");
		}
		*/
		
		
		
		
		
	}
}
