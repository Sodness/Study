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
		System.out.println("가위 바위 보 게임입니다. 가위, 바위, 보 중에서 입력하세요");
		System.out.print("철수 >> ");
		Scanner scanner = new Scanner(System.in);
		String str1 = scanner.next();
		System.out.print("영희 >> ");
		String str2 = scanner.next();
		
		if (str1.equals("가위")) {
			if(str2.equals("가위")) {
				System.out.println("비겼습니다.");
			}
			else if(str2.equals("바위")) {
				System.out.println("영희가 이겼습니다.");
			}
			else if(str2.equals("보")) {
				System.out.println("철수가 이겼습니다.");
			}
		}
		else if(str1.equals("바위")) {
			if(str2.equals("가위")) {
				System.out.println("철수가 이겼습니다.");
			}
			else if(str2.equals("바위")) {
				System.out.println("비겼습니다.");
			}
			else if(str2.equals("보")) {
				System.out.println("영희가 이겼습니다.");
			}
		}
		else if(str1.equals("보")) {
			if(str2.equals("가위")) {
				System.out.println("영희가 이겼습니다.");
			}
			else if(str2.equals("바위")) {
				System.out.println("철수가 이겼습니다.");
			}
			else if(str2.equals("보")) {
				System.out.println("비겼습니다.");
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
		System.out.print("두 정수를 입력하세요>>");
		int a = scanner.nextInt();
		int b = scanner.nextInt();
		System.out.println(a + "+" + b + "은 " + (a+b));
		*/
		
		
		/*
		System.out.print("몇 층인지 입력하세요>>");
		Scanner scanner = new Scanner(System.in);
		int a = scanner.nextInt();
		System.out.println((155*5) + "m 입니다.");
		*/
		
		
		/*
		System.out.print("x 값을 입력하세요>>");
		Scanner scanner = new Scanner(System.in);
		int x = scanner.nextInt();
		int y = x*x - 3*x + 7;
		System.out.println("x=" + x + ", y=" + y);
		*/
		
		
		/*
		System.out.print("점 (x,y)의 좌표를 입력하세요>>");
		Scanner scanner = new Scanner(System.in);
		int x = scanner.nextInt();
		int y = scanner.nextInt();
		
		if (50 <= x && x <= 100) {
			if (50 <= y && y <= 100) {
				System.out.println("점(" + x + "," + y + ")은 (50, 50)과 (100,100)의 사각형 내에 있습니다.");
			}
		}
		*/
		
		
		/*
		System.out.print("논리 연산을 입력하세요>>");
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
		System.out.print("돈의 액수를 입력하세요>>");
		Scanner scanner = new Scanner(System.in);
		int won = scanner.nextInt();
		int won50000 = won / 50000;
		int won10000 = won % 50000 / 10000;
		int won1000 = won % 10000 / 1000;
		int won500 = won % 1000 / 500;
		int won100 = won % 500 / 100;
		int won10 = won % 100 / 10;
		int won1 = won % 10;
		System.out.println("오만원" + won50000 + "개, "
				+ "만원" + won10000 + "개, "
				+ "천원" + won1000 + "개, "
				+ "500원" + won500 + "개, "
				+ "100원" + won100 + "개, "
				+ "10원" + won10 + "개, "
				+ "1원" + won1 + "개, ");
		*/
		
		
		/*
		System.out.print("학점을 입력하세요>>");
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
		System.out.print("커피 주문하세요>>");
		Scanner scanner = new Scanner(System.in);
		String coffee = scanner.next();
		int num = scanner.nextInt();
		
		if(coffee.equals("에스프레소")) {
			System.out.println((2000*num) + "원입니다.");
		}
		else if(coffee.equals("아메리카노")) {
			System.out.println((2500*num) + "원입니다.");
		}
		else if(coffee.equals("카푸치노")) {
			System.out.println((3000*num) + "원입니다.");
		}
		else if(coffee.equals("카페라떼")) {
			System.out.println((3500*num) + "원입니다.");
		}
		
		switch(coffee) {
		case "에스프레소": System.out.println((2000*num) + "원입니다."); break;
		case "아메리카노": System.out.println((2500*num) + "원입니다."); break;
		case "카푸치노": System.out.println((3000*num) + "원입니다."); break;
		case "카페라떼": System.out.println((3500*num) + "원입니다."); break;
		}
		*/
		
		
		/*
		System.out.print("1~99 사이의 정수를 입력하세요>>");
		Scanner scanner = new Scanner(System.in);
		int num = scanner.nextInt();
		
		int n10 = num / 10;
		int n1 = num % 10;
		if ((n10 % 3 == 0) && (n1 % 3 == 0) && (n1 != 0) && (n10 != 0)) {
			System.out.println("박수짝짝");
		}
		else if((n10 % 3 == 0) || (n1 % 3 == 0) && (n1 != 0) && (n10 != 0)) {
			System.out.println("박수짝");
		}
		else {
			System.out.println("박수없음");
		}
		*/
		
		
		/*
		System.out.print("커피 주문하세요>>");
		Scanner scanner = new Scanner(System.in);
		String coffee = scanner.next();
		int num = scanner.nextInt();
		
		if(coffee.equals("에스프레소")) {
			if(10 <= num) {
				System.out.println((int)(2000*num*0.95) + "원입니다.");
			}
			else {
				System.out.println((2000*num) + "원입니다.");
			}
		}
		else if(coffee.equals("아메리카노")) {
			System.out.println((2500*num) + "원입니다.");
		}
		else if(coffee.equals("카푸치노")) {
			System.out.println((3000*num) + "원입니다.");
		}
		else if(coffee.equals("카페라떼")) {
			System.out.println((3500*num) + "원입니다.");
		}
		*/
		
		
		
		
		
	}
}
