package second052;

public class Second052 {
	public static int BITMASK = 1;
	
	public static String shifts(int a) {
		
		String s = "";
		for(int i=0; i<=31; i++) {
			s = (a & BITMASK) + s;
			a >>= 1;
		}
		return s.substring(s.indexOf('1'));
	}
	
	public static void main(String[] args) {
		int intNums_1 = 123;
		int intNums_2 = -123;
		System.out.printf("%d : %s%n", intNums_1, shifts(intNums_1));
		System.out.printf("%d : %s%n", intNums_2, shifts(intNums_2));
	}
}
