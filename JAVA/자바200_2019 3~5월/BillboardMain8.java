package second095;
import org.json.JSONObject;
import org.json.JSONArray;
import java.io.FileReader;
import java.io.BufferedReader;

public class BillboardMain8 {
	public static void main(String[] args) {
		BufferedReader br = null;
		try {
			br = new BufferedReader(new FileReader("D:\\자료\\컴퓨터 프로그래밍\\자바200\\2\\2019.05.13\\095\\" + "test" + ".json"));
			
			StringBuffer sb = new StringBuffer();
			String msg = "";
			while((msg = br.readLine()) != null) {
				sb.append(msg);
			}
			
			JSONObject billboards = new JSONObject(sb.toString());
			JSONArray bills = billboards.getJSONArray("billboard");
			for(int i=0; i<bills.length(); i++) {
				System.out.println("----------------------------");
				JSONObject bill = bills.getJSONObject(i);
				String rank 	= bill.getString("rank");
				String song 	= bill.getString("song");
				String lastweek = bill.getString("lastweek");
				String imagesrc = bill.getString("imagesrc");
				String artist 	= bill.getString("artist");
				
				String sf = String.format("%s,%s,%s,%s,%s", 
						rank, song, lastweek, imagesrc, artist);
				System.out.println(sf);
			}						
		}catch(Exception e) {
			
		}
	}
}
