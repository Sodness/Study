package second023;

public class Second023 {
	public static void main(String[] args) {
		char a = '��';
		String letter = "���� ���� ��λ��� ������ ��";
		
		int letterNumber = letter.length();
		int loc = letter.indexOf(a);
		
		System.out.printf("\"%s\" => %d��, '%c'�� %d��° �ִ�.", letter, letterNumber, a, loc);
	}
}

