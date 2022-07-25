package second091;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.URL;
import java.util.Calendar;
import java.util.Date;
import java.util.Locale;
import java.text.SimpleDateFormat;
import java.util.TimeZone;


public class Second091 {
	public static void main(String[] args) {
		String newUrls = "https://www.billboard.com/charts/hot-100/";
		String s = "";
		URL url = null;
		
		try {
			url = new URL(newUrls);
			BufferedReader reader = new BufferedReader(
					new InputStreamReader(url.openStream(), "euc-kr"), 8);
			String line = "";
			while((line = reader.readLine()) != null) {
				if(!line.trim().equals("")) {
					if(line.trim().contains("<a href=\"/charts/hot-100")) {
						s = line.trim();
						System.out.println(s);				
						s = s.substring(s.indexOf('/'));
						System.out.println(s);
						s = s.substring(s.indexOf('/',1));
						System.out.println(s);
						s = s.substring(s.indexOf('/',1) + 1);
						System.out.println(s);
						s = s.substring(0, s.indexOf('\"'));
						System.out.println(s);
					}
				}
			}
			
		}catch(Exception e) {
			System.out.println("Billboard Parsing error!!!");
		}
		System.out.println("chart date: " + s);
	}
	
	/*
	public static void today() {
		Calendar c = Calendar.getInstance();
		c.setTimeZone(TimeZone.getTimeZone("America/New_York"));
		System.out.println(c);
		Date d = new Date();
		SimpleDateFormat sdf = new SimpleDateFormat("MMM dd, yyyy", new Locale("en", "US"));
		
		String str_1 = sdf.format(c.getTime());
		String str_2 = sdf.format(d);
		System.out.println(str_1 + " " + str_2);
	}
	*/
	
	
	
	
	
	
	
	
}
