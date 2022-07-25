package second029;

public class Second029 {
	public static final int PHYSICAL = 23;
	
	public static double getBioRhythm(long days, int index, int max) {
		return max * Math.sin((days%index) * 2 * Math.PI / index);
	}
	
	public static void main(String[] args) {
		int days = 1200;
		double phyval = getBioRhythm(days, PHYSICAL, 100);
		System.out.printf("신체지수 %.2f\n", phyval);
	}
}
