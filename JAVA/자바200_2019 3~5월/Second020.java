package second020;

public class Second020 {
	public static void main(String[] args) {
		int kor = 90;
		int eng = 80;
		int math = 89;
		
		int tot = kor + eng + math;
		int average = tot/3;
		
		System.out.printf("kor = %d, eng = %d, math = %d \n", kor, eng, math);
		System.out.printf("tot = %d, ave = %d", tot, average);
	}
}
