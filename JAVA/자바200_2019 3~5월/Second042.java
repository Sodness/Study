package second042;

public class Second042 {
	public static void main(String[] args) {
		for(int i = 0; i < 101; i++) {
			double fahrenheit = 9.0/5*i + 32;
			System.out.printf("%d = %.2f\n", i, fahrenheit);
		}
	}
}
