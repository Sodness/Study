package second023;

public class Second023 {
	public static void main(String[] args) {
		char a = '닳';
		String letter = "동해 물과 백두산이 마르고 닳";
		
		int letterNumber = letter.length();
		int loc = letter.indexOf(a);
		
		System.out.printf("\"%s\" => %d개, '%c'는 %d번째 있다.", letter, letterNumber, a, loc);
	}
}

