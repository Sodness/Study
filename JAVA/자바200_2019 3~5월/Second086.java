package second087;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;


public class Second086 {
	public static void main(String[] args) {
		Billboard b_1 = new Billboard(1, "Despacito", 1,
				"https://www.billboard.com/images/pref_images/q61808osztw.jpg", "luis fonsi");
		Billboard b_2 = new Billboard(2, "That's What I Like", 2,
				"https://www.billboard.com/images/pref_images/q59725qvpol.jpg", "bruno mars");
		Billboard b_3 = new Billboard(3, "I'm The One", 3,
				"https://www.billboard.com/images/pref_images/q64532pl64x.jpg", "dj khaled");
		
		ArrayList<Billboard> bblist = new ArrayList<>();
		bblist.add(b_1);
		bblist.add(b_2);
		bblist.add(b_3);
		
		File f = new File("billboard");
		File ff = new File("test");
		if(!f.exists()) { f.mkdirs(); }
		if(!ff.exists()) { ff.mkdirs(); }
		try(PrintWriter pw = new PrintWriter(new FileWriter("billboard\\bill.txt", false), true)){
			for(Billboard bb : bblist) {
				pw.println(bb);
			}
		}catch(IOException e) {
			System.out.println(e);
		}
	}
}
