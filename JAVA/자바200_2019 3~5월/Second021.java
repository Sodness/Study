package second021;

public class Second021 {
	public static void main(String[] args) {
		int[] grade = {90, 80, 89};
		int tot = grade[0] + grade[1] + grade[2];
		int average = tot/3;
		
		System.out.printf("kor = %d, eng = %d, math = %d\n", grade[0], grade[1], grade[2]);
		System.out.printf("tot = %d, ave = %d\n\n", tot, average);
		
		double a = 6.666666666;
		System.out.printf("%.3f", a);
	}
}
