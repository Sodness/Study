package second028;

public class Second028 {
	public static final int PHYSICAL = 23;
	
	public static void main(String[] args) {
		int index = PHYSICAL;
		int days = 1200;
		
		double phyval = 100 * Math.sin((days % index) * 2 * Math.PI / index);
		System.out.printf("신체 지수: %.2f", phyval);
	}
}

