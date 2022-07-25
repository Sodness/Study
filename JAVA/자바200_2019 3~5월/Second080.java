package second080;
import java.util.ArrayList;


public class Second080 {
	public static void main(String[] args) {
		int intNum_1 		= 123;
		long longNum_1 		= 345;
		double doubleNum_1	= 123.123;
		
		Integer intWrap_1	= intNum_1;
		Long	LongWrap_1	= longNum_1;
		Double doubleWrap_1	= doubleNum_1;
		double dd = doubleWrap_1;
		
		Integer intWrap_2 = intNum_1;
		intNum_1 = intWrap_2;
		System.out.println(intNum_1);
		
		ArrayList<Integer> ilists = new ArrayList<>();
		ilists.add(new Integer(3));
		ilists.add(5);
		int a = ilists.get(0);
		System.out.println(a);
		
		int b = Integer.parseInt("123");
		System.out.println(b);
	}
}
