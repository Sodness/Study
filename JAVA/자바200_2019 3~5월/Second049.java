package second049;

public class Second049 {
	public static boolean isPrime(int n) {
		boolean isS = true;
		for(int i = 2; i <= (int)Math.sqrt(n); i++) {
			if(n%i == 0) {
				isS = false;
				break;
			}
		}
		return isS;
	}
	
	public static void main(String[] args) {
		int number = 13;
		boolean ifPrime = isPrime(number);
		if(ifPrime) {
			System.out.printf("%d는 소수", number);
		}else {
			System.out.printf("%d는 소수가 아니다", number);
		}
	}
}
