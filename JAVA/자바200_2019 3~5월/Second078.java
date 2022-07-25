package second078;


public class Second078 {
	public static void main(String[] args) {
		String[] myNum_1 = new String[] {"123", "456", "789"};
		String[] myNum_2 = {"123", "456", "789"};
		System.out.println(myNum_2[0]);
		print(myNum_1);
		
		myNum_1 = new String[] {"789", "456", "123"};
		String[] tos = new String[myNum_1.length];
		System.arraycopy(myNum_1, 0, tos, 0, tos.length);
		print(tos);
	}
	
	public static void print(String[] str) {
		for(String aa : str) {
			System.out.print(aa + "\t");
		}
		System.out.println();
	}
}
