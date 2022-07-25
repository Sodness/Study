package second098;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.URL;
import java.util.ArrayList;


public class Second093 {
	ArrayList<String> htmls = new ArrayList<String>();
	ArrayList<Billboard> billboards = new ArrayList<Billboard>();
	boolean isConnection = false;
	
	public Second093() {
		htmls.clear();
		billboards.clear();
	}
	
	public ArrayList<Billboard> getBillboards(){
		return billboards;
	}
	
	public void getAllHtml(String uewUrls) {
		htmls.clear();
		URL url = null;
		
		try {
			url = new URL(uewUrls);
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
			System.out.println("Billboard parsing error!!!");
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
	
	public synchronized void getBillboardData(String msg) {
		billboards.clear();
		
		for(int i=0; i<htmls.size(); i++) {
			String st = htmls.get(i);
			
			if(st.contains("WEEKS AT NO. 1")) {
				int a = i;
				//System.out.println(st + a);
				
				for(int j=a; j<htmls.size(); j++) {
					//System.out.println(j);
					String ss = htmls.get(j);
					if(ss.contains(msg)) {
						if(ss.contains("chart-video__wrapper")) {
							continue;
						}
						System.out.println(ss);
						String rank = ss.substring(ss.indexOf("data-rank=\"") + "data-rank=\"".length());
						rank = rank.substring(0, rank.indexOf("\""));					
						System.out.println(rank);
					
						String artist = ss.substring(ss.indexOf("data-artist=\"") + "data-artist=\"".length());
						artist = artist.substring(0, artist.indexOf("\""));
						System.out.println(artist);
						
						String song = ss.substring(ss.indexOf("data-title=\"") + "data-title=\"".length());
						song = song.substring(0, song.indexOf("\""));
						System.out.println(song);
						
						int p=1;
						String imageurl = htmls.get(j+p);
						while(true) {
							if(imageurl.contains("data:image/png;base64")) {
								break;
							}else {
								p++;
								imageurl = htmls.get(j+p);
							}
						}
						imageurl = imageurl.substring(imageurl.lastIndexOf("https://"));
						System.out.println(imageurl);
						imageurl = imageurl.substring(0, imageurl.indexOf(".jpg") + ".jpg".length());
						System.out.println(imageurl);
						imageurl = "http" + imageurl.substring(imageurl.indexOf('s') + 1);
						System.out.println(imageurl);
						
						//<div class="chart-list-item__last-week">62</div>
						int k=1;
						String lastweek = htmls.get(j+p+k);
						while(true) {
							if(lastweek.contains("last-week")) {
								System.out.println(lastweek);
								lastweek = lastweek.substring(lastweek.indexOf("last-week\">") + "last-week\">".length());
								lastweek = lastweek.substring(0, lastweek.indexOf("<"));
								break;
							}else {
								k++;
								lastweek = htmls.get(j+p+k);
							}
						}
						System.out.println(lastweek);
						System.out.println();

						Billboard board =  new Billboard(
								toInt(rank), replace(song),
								toInt(__toStr(lastweek)),
								imageurl, artist);
						billboards.add(board);
						
						j = j+p+k;
					}
				}
			}	
		}
	}	
	//<div class="chart-list-item  " data-rank="1" data-artist="Lil Nas X Featuring Billy Ray Cyrus" data-title="Old Town Road" data-has-content="true">
	
	public void printHtml() {
		for(String dto : htmls) {
			System.out.println(dto);
		}
	}
	
	public void printBillboard() {
		for(Billboard dto : billboards) {
			System.out.println(dto);
		}
	}
	
	public String replace(String msg) {
		String ss = msg;
		ss = ss.replaceAll("&#039;", "");
		ss = ss.replaceAll("&amp;", "&");
		ss = ss.replaceAll("&quot;", "\"");
		return ss.trim();
	}
	
	private String __toStr(String lastweek) {
		return lastweek.contains("-")? 101+"" : lastweek;
	}
	
	private int toInt(String msg) {
		return Integer.parseInt(msg == null? "-1" : msg.trim());
	}
	
	public static void main(String[] agrs) {
		Second093 A = new Second093();
		String address = "https://www.billboard.com/charts/hot-100";
		
		A.getAllHtml(address);
		String str = "data-rank=";
		A.getBillboardData(str);
		A.printHtml();
		//A.printBillboard();

	}	
}
