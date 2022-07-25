package second076;

public class Second076 {
	public static void main(String[] args) {
		Character ch_1 = 'W';
		Character ch_2 = '9';
		
		if(Character.isLetter(ch_1.charValue())) {
			System.out.print(" 1: " + ch_1.charValue());
		}
		System.out.print(" ");
		System.out.print('\u0057' + '\t'); System.out.print("\t");
		System.out.println(Integer.toHexString((int)ch_1));
		System.out.println((int)ch_1);
		if(Character.isDigit(ch_2.charValue())) {
			System.out.println(" 2: " + (int)ch_2.charValue());
		}
		
		System.out.println(" 3: " + Character.getType('a'));
		System.out.println(" 4: " + Character.getType('A'));
		System.out.println(" 5: " + Character.getType('3'));
		System.out.println(" 6: " + Character.getType('&'));
		System.out.println(" 7: " + Character.getType('\n'));
		
		System.out.println(" 8: " + (int)'\t');
		System.out.println(" 9: " + (int)'\n');
		System.out.println("10: " + (int)'\f');
		System.out.println("11: " + (int)'\r');
		
		System.out.println("12: " + Character.getNumericValue('9'));
		System.out.println("13: " + Character.isWhitespace(' '));
		System.out.println("14: " + Character.isWhitespace('\n'));
		System.out.println("15: " + Character.isWhitespace('\r'));
		System.out.println("16: " + Character.isWhitespace('\b'));
		System.out.println("17: " + Character.isLetterOrDigit('9'));
		System.out.println("18: " + Character.isLowerCase('A'));
		System.out.println("19: " + Character.isUpperCase('A'));
		
		System.out.println("20: " + Character.digit('8', 9));
		System.out.println("21: " + (int)' ');
		System.out.println("22: " + Character.isSpaceChar(' '));
		System.out.println("23: " + Character.isSpaceChar('\n'));
	}
}




















