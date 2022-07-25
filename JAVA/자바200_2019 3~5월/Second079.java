package second079;


public class Second079 {
	public static void main(String[] args) {
		System.out.println("//2차원 배열 방법  1");
		int[][] a = new int[4][3];
		a[0][0] = 1;
		a[0][1] = 2;
		println(a);
		
		System.out.println("//2차원 배열 방법  2");
		int[][] b = new int[3][];
		b[0] = new int[4];
		b[1] = new int[5];
		b[2] = new int[3];
		println(b);
		
		System.out.println("//2차원 배열 방법  3");
		int[][] c = new int[][] {{1,2}, {3,4}, {5,6}};
		println(c);
		
		System.out.println("//2차원 배열 방법  4");
		int[][] g = {{1,2}, {3,4}, {5,6}};
		println(g);
		
		System.out.println("copy_1");
		int[][] d = new int[c.length][c[0].length];
		for(int i=0; i<c.length; i++) {
			System.arraycopy(c[i], 0, d[i], 0, d[i].length);
		}
		println(d);
	}
	
	public static void println(int[][] p) {
		for(int i=0; i<p.length; i++) {
			for(int j=0; j<p[i].length; j++) {
				System.out.print("[" + p[i][j] + "]");
			}
			System.out.println();
		}
	}
}
