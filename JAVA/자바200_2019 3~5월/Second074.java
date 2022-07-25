package second074;
import java.util.Calendar;
import java.util.Date;


public class Second074 {
	public static void main(String[] args) {
		long millis = System.currentTimeMillis();
		System.out.println(millis/1000/24/60/60);
		
		Date d = new Date();
		System.out.println(d);
		Date dd = new Date(d.getTime() + 24*60*60*1000);
		System.out.println(dd);
		
		Calendar cal = Calendar.getInstance();
		cal.set(1970,1-1,1);
		
		Calendar today = Calendar.getInstance();
		printCalendar(today);
		long minus = today.getTimeInMillis() - cal.getTimeInMillis();
		System.out.println(minus);
		System.out.println(minus/1000/24/60/60);
	}

	public static void printCalendar(Calendar c) {
		System.out.println("---------------------------------");
		System.out.println(c.get(Calendar.YEAR) + " " + 
						   c.get(Calendar.MONTH+1) + " " +
					       c.get(Calendar.DAY_OF_MONTH) + " " +
					       c.get(Calendar.AM_PM) + " " +
					       c.get(Calendar.HOUR_OF_DAY) + " " +
					       c.get(Calendar.MINUTE) + " " +
					       c.get(Calendar.SECOND));
	}
}
