package second025;
import java.util.Scanner;

public class Second025 {
	public static void main(String[] args) {
		int a;
		double b;
		String str;
		
		Scanner scan = new Scanner(System.in);
		
		System.out.print("입력:");
		a = scan.nextInt();
		System.out.printf("a = %d\n", a);
		
		System.out.print("입력:");
		b = scan.nextDouble();
		System.out.println(b);
		
		System.out.print("입력:");
		str = scan.next();
		System.out.printf("str = %s\n", str);
	}
}
