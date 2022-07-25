package test01;

public class test01 {
	public static void main(String[] args) {
		StringBuffer sb = new StringBuffer("This");
		sb.append(" is pencil");
		sb.insert(7, " my");
		sb.replace(8, 10, "your");
		System.out.println(sb);
	}
}
