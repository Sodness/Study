package second069;


public class Second069 {
	public static void main(String[] args) {
		StringBuffer sb = new StringBuffer();
		
		sb.append("Hello.")
		  .append("See you later.")
		  .append("Love you. Wait");
		System.out.println(sb.toString() + sb.hashCode());
		
		sb.replace(0, 2, "Don't want to see");
		System.out.println(sb.toString() + sb.hashCode());
		
		sb.reverse();
		System.out.println(sb.toString());
		
		sb.delete(10, 15);
		System.out.println(sb.toString());
		
		replaces(sb);
		System.out.println(sb.toString());
	}
	
	public static void replaces(StringBuffer sb) {
		sb.reverse();
		sb.replace(0, 3, "GoGo");
	}
}
