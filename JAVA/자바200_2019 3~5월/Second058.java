package second058;

public class Second058 {
	public static void main(String[] args) {
		int s=0;
		
		for(int i=1; i<=10; i++) {
			if(i%2 == 1) {
				s += i*i;
			}
		}
		
		System.out.printf("1~10 È¦¼ö Á¦°öÀÇ ÇÕ: " + s);
	}
}
