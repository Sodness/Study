package second033;

public class Second033_1 {
	public static void main(String[] args) {
		double latitude_1	= 37.521272;
		double longitude_1	= 127.007446;
		double latitude_2	= 35.137879;
		double longitude_2	= 129.045410;
		
		Second033 aa	= new Second033();
		aa.latitude		= latitude_1;
		aa.longitude	= longitude_1;
		System.out.println(aa.latitude + "\t" + aa.longitude);
		
		Second033 bb	= new Second033();
		bb.latitude		= latitude_2;
		bb.longitude	= longitude_2;
		
		Second033 cc = bb;
		System.out.println(cc.latitude + "\t" + cc.longitude);
	}
}
