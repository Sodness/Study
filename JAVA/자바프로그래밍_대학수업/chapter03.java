package chapter03;
import java.util.Random;
import java.util.Scanner;
import java.lang.Exception;

public class Main {
	public static void main(String[] args) {
		/*
		Random r = new Random();
		Scanner scanner = new Scanner(System.in);
		
		do {
			int k = r.nextInt(100);
			int lownum = 0;
			int highnum = 99;
			int i=1;
			int result = -1;
			
			System.out.println("Up & Down �����Դϴ�. ������ ���� ���߾� ������.");
			while(true) {
				System.out.println(lownum + "-" + highnum);
				System.out.print(i + ">>");
				result = scanner.nextInt();
				if(result == k) {
					break;
				}
				else if(result < k) {
					System.out.println("�� ����");
					lownum = result;
				}
				else if(k < result) {
					System.out.println("�� ����");
					highnum = result;
				}
				i++;
			}
			System.out.println("�¾ҽ��ϴ�.");
			System.out.print("�ٽ��Ͻðڽ��ϱ�(y/n)>>");
		}while(scanner.next().equals("y"));
		
		scanner.close();
		*/
		
		
		/*
		int i=0, sum=0;
		while(i<10) {
			i = i+2;
			sum = sum+i;
		}
		System.out.println(sum);
		
		int i1=0, sum1=0;
		while(true) {
			i1 = i1+2;
			sum1 = sum1+i1;
			if(i1>=10) break;
		}
		System.out.println(sum1);
		
		int i2=0, sum2=0;
		do {
			i2 = i2+2;
			System.out.println("#1");
			if(i2>10) {System.out.println("#9"); continue;}
			System.out.println("#2");
			sum2 = sum2+i2;
		}while(i2<10);
		System.out.println("#3");
		System.out.println(sum2);
		*/
		
		
		/*
		String s = "23.5";
		try {
			int n = Integer.parseInt(s);
			n++;
			System.out.println(n);
		}
		catch(NumberFormatException e) {
			System.out.println(s + "�� ������ ��ȯ�� �� �����ϴ�.");
		}
		finally {
			System.out.println("����� �����ϴ�.");
		}
		*/
		
		
		/*
		System.out.print("���ĺ� �� ���ڸ� �Է��ϼ���>>");
		Scanner scan = new Scanner(System.in);
		String str = scan.next();
		String abc = "abcde";
		int n = abc.indexOf(str);
		
		abc = abc.substring(0, n+1);
		System.out.println(abc);
		for(int i=0; i<n; i++) {
			abc = abc.substring(1, n+1-i);
			System.out.println(abc);
		}
		*/
		
		
		/*
		System.out.print("���� 10�� �Է�>>");
		Scanner scan = new Scanner(System.in);
		int arr[] = new int[10];
		
		for(int i=0; i<10; i++) {
			arr[i] = scan.nextInt();
		}
		for(int i=0; i<10; i++) {
			if((arr[i] % 3) == 0 && (arr[i] % 10) != 0) {
				System.out.print(arr[i] + " ");
			}
		}
		*/
		
		
		/*
		System.out.print("������ �Է��ϼ���>>");
		Scanner scan = new Scanner(System.in);
		
		try {
			int num = scan.nextInt();
			if(num % 2 == 0) {
				System.out.println("¦��");
			}
			else {
				System.out.println("Ȧ��");
			}
		}
		catch(Exception e){
			System.out.println("���� �Է����� �ʾ� ���α׷� �����մϴ�.");
		}
		*/
		
		
		/*
		char day[] = {'��', '��', 'ȭ', '��', '��', '��', '��'};
		System.out.print("������ �Է��ϼ���>>");
		Scanner scan = new Scanner(System.in);
		
		try {
			int num = scan.nextInt();
			num = num % 7;
			System.out.println(day[num]);
		}
		catch(ArrayIndexOutOfBoundsException e) {
			System.out.println("���α׷� �����մϴ�...");
		}
		catch(Exception e) {
			System.out.println("���! ���� �Է����� �ʾҽ��ϴ�.");
		}
		*/
		
		
		/*
		System.out.print("���� 10�� �Է�>>");
		Scanner scan = new Scanner(System.in);
		int arr[] = new int[10];
		int arr1[] = new int[10];
		int tmp=0, n=0;
		
		for(int i=0; i<10; i++) {
			arr[i] = scan.nextInt();
		}
		
		for(int i=0; i<10; i++) {
			int j;
			n = i;
			tmp = arr[i];
			
			for(j=i; j<10; j++) {
				if(arr[j] < tmp) {
					tmp = arr[j];
					n = j;
				}
				System.out.print(i + ". ");
				System.out.print(tmp + " ");
				System.out.print(n);
				System.out.println();
			}
			arr[n] = arr[i];
			arr[i] = tmp;
			
			
			System.out.print("check ");
			for(int i1=0; i1<10; i1++) {
				System.out.print(arr[i1] + " ");
			}
			System.out.println();
		}
		
		for(int i=0; i<10; i++) {
			System.out.print(arr[i] + " ");
		}
		*/
		

		
		
		/**/
		/**/
	}
}
