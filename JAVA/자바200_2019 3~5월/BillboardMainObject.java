package second084;
import second083.Billboard;


public class BillboardMainObject {
	public static void main(String[] args) {
		Billboard b_1 = new Billboard(1, "Despacito", 1,
				"https://www.bilboard.com/images/pref_images/q16808osztw.jpg", "luis fonsi");
		Billboard b_2 = new Billboard(2, "That's What I Like", 2,
				"https://www.billboard.com/images/pref_images/q59725qvpol.jpg", "bruno mars");
		Billboard b_3 = new Billboard(3, "I'm The One", 3,
				"https://www.billboard.com/images/pref_images/q64532pl64.jpg", "dj khaled");
		
		showAbout(b_1);
		showAbout(b_2);
		showAbout(b_1, b_2);
		showAbout(b_1, b_2, b_3);
		
		Billboard[] b = new Billboard[3];
		b[0] = b_1;
		b[1] = b_2;
		b[2] = b_3;
		showAbout(b[0], b[1]);
		showAbout(b);
	}
	
	public static void showAbout(Billboard bb) {
		System.out.println("1-------------------------------------");
		String sf = String.format("%d, %s, %d, %s, %s",
				bb.getRank(), bb.getSong(), bb.getLastweek(), bb.getImagesrc(), bb.getArtist());
		System.out.println(sf);
	}
	public static void showAbout(Billboard... b	) {
		System.out.println("2====================================>");
		for(Billboard bill : b) {
			showAbout(bill);
		}
		System.out.println("<====================================2");
	}
}
