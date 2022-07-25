package second062;

public class Second062 {
	public static void main(String[] args) {
		String sNum = "123";
		String nNum = "h";
		
		try {
			int a = Integer.parseInt(sNum);
			System.out.println(a);
		}catch(NumberFormatException ee) {
			System.out.println("int Check");
			System.out.println(ee.getMessage());
		}catch(Exception ee) {
			System.out.println("Make Suer");
		}finally {
			System.out.println("Suppose to be Printed");
		}
	}
}
