package second092;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;
import java.util.TimeZone;


public class Second075 {
	public static void main(String[] args) {
		String st = "2019-04-24";
		
		Calendar cal = todate(st);
		System.out.println(toYMD(cal));
		System.out.println(cal);
		
		String st_2 = goGo(st, -7);
		System.out.println("goGo: " + st_2);
		
		Calendar cal_2 = todate(st_2);
		System.out.println(toYMD(cal_2));
		
		TimeZone tz = TimeZone.getDefault();
		Calendar cal_today = Calendar.getInstance(tz);
		System.out.println(toYMD2(cal_today));
		
		TimeZone tzNY = TimeZone.getTimeZone("America/New_York");
		Calendar calNY = Calendar.getInstance(tzNY);
		System.out.println(toYMD2(calNY));
	}
	
	public static Calendar todate(String ss) {
		SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd");
		Date dd = new Date();
		try {
			dd = sdf.parse(ss);
		}catch(ParseException e) {
		}
		Calendar cal = Calendar.getInstance();
		cal.setTime(dd);
		return cal;
	}
	
	public static String toYMD(Calendar cal) {
		SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd");
		return sdf.format(cal.getTime());
	}
	
	public static String toYMD2(Calendar cal) {
		SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");
		return sdf.format(cal.getTime());
	}
	
	public static String goGo(String ss, int day) {
		Calendar cal = todate(ss);
		
		/*
		System.out.println("Calendar.DAY_OF_YEAR: " + cal.get(Calendar.DAY_OF_YEAR));
		System.out.println("Calendar.DAY_OF_MONTH: " + cal.get(Calendar.DAY_OF_MONTH));
		System.out.println("Calendar.DATE: " + cal.get(Calendar.DATE));
		System.out.println("Calendar.MONTH: " + cal.get(Calendar.MONTH));
		*/
		
		cal.add(Calendar.DAY_OF_YEAR, day);
		
		/*
		System.out.println("Calendar.DAY_OF_YEAR: " + cal.get(Calendar.DAY_OF_YEAR));
		System.out.println("Calendar.DAY_OF_MONTH: " + cal.get(Calendar.DAY_OF_MONTH));
		System.out.println("Calendar.DATE: " + cal.get(Calendar.DATE));
		System.out.println("Calendar.MONTH: " + cal.get(Calendar.MONTH));
		*/
		
		SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd");
		return sdf.format(cal.getTime());
	}
}


















