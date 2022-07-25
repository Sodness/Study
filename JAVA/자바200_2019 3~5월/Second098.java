package second098;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import javafx.scene.image.Image;

import java.util.Set;


public class Second098 {
	private Map<String, Image> images;
	
	public Second098() {
		images = Collections
				.synchronizedMap(new LinkedHashMap<String, Image>(10, 1.53f, true));
	}
	
	public synchronized Image loadImage(String imagesrc) {
		Image mimage= new Image(imagesrc, 100, 100, true, true);
		
		if(images.containsKey(imagesrc)) {
			System.out.println(1000);
			mimage= images.get(imagesrc);
		}else {
			if(imagesrc!=null && !imagesrc.contains("q_____")) {
				try {
					mimage= new Image(imagesrc, 100, 100, true, true);
				}catch(Exception e) {
					System.out.println(2000);
					mimage=null;
				}
			}
		}
		return mimage==null ? 
				new Image(getClass().getResourceAsStream("billboard.jpg")) : mimage;
	}
	
	public synchronized void getAllImages(ArrayList<Billboard> bills) {
		images.clear();
		List<Billboard> newbills= Collections.synchronizedList(bills);
		
		for(Billboard bb : newbills) {
			new Thread(()-> {
				if(!images.containsKey(bb.getImagesrc())) {
					images.put(bb.getImagesrc(), loadImage(bb.getImagesrc()));
					System.out.println(bb.getImagesrc() +
							"\t\t\t---Map¿¡ Image ÀúÀå---->>>>>>");
				}
			}).start();
		}
	}
	
	public synchronized void printImage() {
		System.out.println(images.size());
		Iterator<String> imagekeys = images.keySet().iterator();
		
		while(imagekeys.hasNext()) {
			String key = imagekeys.next();
			System.out.printf("key=%s\n", key);
		}
	}
	
	public void keyPrint() {
		for(Map.Entry<String, Image> entry : images.entrySet()) {
			System.out.println("key: " + entry.getKey());
		}
	}
	
	public static void main(String[] args) {
		Second098 request = new Second098();
		Second093 A = new Second093();
		String address = "https://www.billboard.com/charts/hot-100";
		
		A.getAllHtml(address);
		String str = "data-rank=";
		A.getBillboardData(str);
		
		request.keyPrint();

		ArrayList<Billboard> bills = A.getBillboards();
		request.getAllImages(bills);
		//request.printImage();
	}
}
