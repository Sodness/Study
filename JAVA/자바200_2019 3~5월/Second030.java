package second030;

public class Second030 {
	public static final int PHYSICAL = 23;
	
	public double getBioRhythm(long days, int index, int max) {
		return max * Math.sin((days%index) * 2 * Math.PI / index);
	}
	
	public static void main(String[] args) {
		int days = 1200;
		Second030 bio = new Second030();
		double phyval = bio.getBioRhythm(days, PHYSICAL, 100);
		System.out.printf("신체지수  %.2f\n", phyval);
	}
}
