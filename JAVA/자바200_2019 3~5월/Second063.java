package second063;

public class Second063 {
	public static void main(String[] args) {
		try {
			int x = 5;
			int y = 20 / (5-x);
			System.out.println(y);
		}catch(ArithmeticException e) {
			System.out.println("Devided by zero?");
			e.printStackTrace();
		}finally {
			System.out.println("Suppose to be printed");
		}
	}
}
