package second034;
import java.util.Scanner;

public class Second034_MC {
	public static void main(String[] args) {
		int a;
		Scanner scan = new Scanner(System.in);
		
		System.out.printf("In : ");
		a = scan.nextInt();
		
		if(a%2 == 1) {
			System.out.printf("Out : OddNumber %d", a);
		}else {
			System.out.printf("Out : EvenNumber %d", a);
		}
	}
}
