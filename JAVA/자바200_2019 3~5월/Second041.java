package second041;

public class Second041 {
	public boolean isleapYear(int year) {
		boolean isS = false;
		if(((year%4 == 0) && (year%100 != 0)) || (year%400 == 0)) {
			isS = true;
		}
		return isS;
	}
	
	public static void main(String[] args) {
		Second041 hc = new Second041();
		System.out.println(hc.isleapYear(2019));
	}
}
