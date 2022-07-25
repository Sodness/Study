package second070;


public class Second070 {
	public static void main(String[] args) {
		StringBuilder sbu = new StringBuilder();
		
		sbu.append("1")
		   .append("234")
		   .append("5678912345");
		System.out.println(sbu);
		
		sbu.replace(7, 11, "");
		System.out.println(sbu);
		
		sbu.reverse();
		System.out.println(sbu);
		
		sbu.deleteCharAt(3);
		System.out.println(sbu);
		
		sbu.delete(1, 3);
		System.out.println(sbu);
		
		String ss = sbu.substring(0);
		System.out.println(ss);
		System.out.println(sbu);
		
		String st = sbu.substring(0, 4);
		System.out.println(st);
		System.out.println(sbu);
	}
}
