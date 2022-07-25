package second083;


public class Billboardmain {
	public static void main(String[] args) {
		Billboard b_1 = new Billboard(1, "Despacito", 1,
				"https://www.billboard.com/images/pref_images/q61808osztw.jpg", "luis fonsi");
		showAbout(b_1);
		
		Billboard b = b_1;
		showAbout(b);
		
	}
	
	public static void showAbout(Billboard bb) {
		String sf = String.format("%d, %s, %d, %s, %s",
				bb.getRank(), bb.getSong(), bb.getImagesrc(), bb.getArtist());
		System.out.println(sf);
	}
}