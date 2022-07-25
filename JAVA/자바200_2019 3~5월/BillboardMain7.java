package second094;
import java.io.FileReader;
import java.io.BufferedReader;


public class BillboardMain7 {
	public static String cut(String msg) {
		String val = msg.substring(msg.indexOf("=") + 1);
		return val;
		}
	
	public static void show(String msg) {
		System.out.println("----------------------------------------");
		String[] msgs = msg.split(", ");
		String rank = cut(msgs[0]).trim();
		String song = cut(msgs[1]).trim();
		String lastweek = cut(msgs[2]).trim();
		String imagesrc = cut(msgs[3]).trim();
		String artist = cut(msgs[4]).trim();
		String sf = String.format("%s, %s, %s, %s, %s", rank, song, lastweek, imagesrc, artist);
		System.out.println(sf);
	}
	
	public static void main(String[] args) {
		Second093 rfw = new Second093();
		String a = "https://www.billboard.com/charts/hot-100/";
		BufferedReader br = null;
		
		try {
			br = new BufferedReader(new FileReader("D:\\자료\\컴퓨터 프로그래밍\\자바200\\2\\2019.05.08\\094\\" + "test" + ".csv"));
			String msg = "";
			while((msg = br.readLine()) != null) {
				show(msg);
			}
		}catch(Exception e) {
			System.out.println(e);
		}
	}
}
