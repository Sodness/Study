import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) {
		/*
		String c = "Java";
		String e = new String("Java");
		String f = new String("Java");
		
		if(f.equals(c))
			System.out.println("f equals c");
		if(f.equals(e))
			System.out.println("f equals e");
		*/
		
		/*
		StringTokenizer st = new StringTokenizer("2+3+4+6", "+");
		int n = st.countTokens();
		System.out.println("토큰 개수 = " + n);
		while(st.hasMoreTokens()) {
			System.out.print(st.nextToken() + " ");
		}
		*/
		
		String a = new String("   hello   ");
		String b = a;
		String c = a.trim();
		a = a.toUpperCase();
		
		System.out.println(a);
		System.out.println(b);
		System.out.println(c);
	}
}
