package second098;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import javafx.scene.image.Image;


public class test {
	private Map<String, Image> images;
	
	
	public void keyPrint() {
		for(Map.Entry<String, Image> entry : images.entrySet()) {
			System.out.println("key: " + entry.getKey());
		}
		
		System.out.println(60);
	}
	
	public static void main(String[] args) {
		Map<String, Image> images;
		
		Image mimage= new Image("D:\\�ڷ�\\��ǻ�� ���α׷���\\�ڹ�200\\2\\2019.05.29-30\\��ũ����(3).png",100,100,false,false);
	}
}
