package second096;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.List;

import java.io.FileReader;
import java.io.BufferedReader;


public class Second096 {
	public static void printToXML(List<Billboard> bblist, String fname) {
		try(PrintWriter pw = new PrintWriter(new FileWriter(fname, false), true)){
			pw.println("<?xml version='1.0' encoding='utf-8'?>");
			pw.println("<billboards>");
			for(Billboard bb : bblist) {
				pw.println(pairxs(bb));
			}
			pw.println("</billboards>");
		}catch(IOException e) {
		}
	}
	
	private static String rp(String msg) {
		String st = msg;
		st = st.replaceAll("&", "&amp;");
		st = st.replaceAll(">", "&gt;");
		st = st.replaceAll("<", "&lt;");
		st = st.replaceAll("\'", "&apos;");
		st = st.replaceAll("\"", "&quot;");
		return st;
	}
	
	private static String pairx(String key, String value) {
		String ss = String.format("<%s>%s</%s>", key, value, key);
		return ss;
	}
	
	private static String pairxs(Billboard bb) {
		String rank = pairx("rank", rp(bb.getRank()+""));
		String song = pairx("song", rp(bb.getSong()+""));
		String lastweek = pairx("lastweek", rp(bb.getLastweek()+""));
		String imagesrc = pairx("imagesrc", rp(bb.getImagesrc()+""));
		String artist = pairx("artist", rp(bb.getArtist()+""));
		return String.format("<billboard>\n%s %s %s %s %s\n</billboard>", 
				rank, song, lastweek, imagesrc, artist);
	}
	
	public static void main(String[] args) {
		Second093 rfw = new Second093();
		String address = "https://www.billboard.com/charts/hot-100";
		rfw.getAllHtml(address);
		
		String str = "data-rank=";
		rfw.getBillboardData(str);
		Second096.printToXML(rfw.getBillboards(), 
				"D:\\자료\\컴퓨터 프로그래밍\\자바200\\2\\2019.05.14\\" + "test" + ".XML");
		/*
		try {
			BufferedReader br = new BufferedReader(
					new FileReader("D:\\자료\\컴퓨터 프로그래밍\\자바200\\2\\2019.05.14\\" + "text" + ".XML"));
			StringBuffer sb = new StringBuffer();
			String msg = "";
			while((msg=br.readLine()) != null) {
				sb.append(msg);
			}
		}catch(Exception e) {
			System.out.println(e);
		}
		*/
	}
}
