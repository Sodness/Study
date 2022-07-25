package second016;
import java.util.Calendar;
import java.util.Date;

public class Second016 {
	public static void main(String[] args) {
		int[] m = {1,2,3};
		int[] n = new int[] {1,2,3};
		String card = "H8";
		Date d = new Date();
		Calendar cal = Calendar.getInstance();
		
		System.out.printf("%d,%d,%d\n",m[0],m[1],m[2]);
		System.out.printf("%d,%d,%d\n",n[0],n[1],n[2]);
		System.out.println(card);
		System.out.println(d);
		System.out.println(cal);
	}
}
