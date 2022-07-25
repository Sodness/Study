package second050;

public class Second050 {
	public static String shifts(int a) {
		String s = "";
		for(int i=0; i<=31; i++) {
			int aa = a%2;
			s = (aa >= 0) ? aa+s : (-aa)+s;
			a>>=1;
		}
		return s;
	}
	
	public static void main(String[] args) {
		int intNums_1 = 123;
		int intNums_2 = -123;
		System.out.printf("%d: %s\n", intNums_1, shifts(intNums_1));
		System.out.printf("%d: %s\n", intNums_2, shifts(intNums_2));
		
		
		/*int a = -5;
		int aa = a%2;
		String s = "";
		s = aa + s;
		System.out.printf("%d, %s", aa, s);*/
	}
}
