package second094;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.URL;
import java.util.ArrayList;


public class Second092 {
	ArrayList<String> htmls = new ArrayList<>();
	boolean isConnection = false;
	
	public Second092() {
		htmls.clear();
	}
	
	public void getAllHtml(String newUrls) {
		htmls.clear();
		URL url = null;
		try {
			url = new URL(newUrls);
			BufferedReader reader = new BufferedReader(
					new InputStreamReader(url.openStream(), "euc-kr"), 8);
			
			String line = "";
			while((line = reader.readLine()) != null) {
				if(!line.trim().equals("")) {
					htmls.add(line.trim());
				}
			}
			isConnection = true;
		}catch(Exception e) {
			isConnection = false;
			System.out.println("Billboead Parsing error!!!");
		}
	}
	
	public void printHtml() {
		for(String ss : htmls) {
			System.out.println(ss);
		}
	}
	
	public String getTimeDate(String newUrls) {
		String s = "";
		URL url = null;
		try {
			url = new URL(newUrls);
			BufferedReader reader = new BufferedReader(
					new InputStreamReader(url.openStream(), "euc-kr"), 8);
			
			String line = "";
			while((line = reader.readLine()) != null) {
				if(!line.trim().equals("")) {
					if(line.trim().contains("<a href=\"/charts/hot-100/")) {
						s = line.trim();			
						s = s.substring(s.indexOf('/'));
						s = s.substring(s.indexOf('/',1));
						s = s.substring(s.indexOf('/',1) + 1);
						s = s.substring(0, s.indexOf('\"'));
						System.out.println(s);
					}
				}
			}
			isConnection = true;
		}catch(Exception e) {
			isConnection = false;
			System.out.println("Billboard Parsing error!!!");
		}
		return s;
	}
	
	public static void main(String[] args) {
		Second092 obj = new Second092();
		String a = "https://www.billboard.com/charts/hot-100/";
		
		obj.getAllHtml(a);
		obj.printHtml();
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
}
