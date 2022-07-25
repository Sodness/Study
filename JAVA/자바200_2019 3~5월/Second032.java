package second032;

public class Second032 {
	public static void main(String[] args) {
		double latitude_1	= 37.52127;
		double longitude_1	= 127.00744;
		double latitude_2	= 35.137879;
		double longitude_2	= 129.04541;
		System.out.println(latitude_1 + "\t" + longitude_1);
		
		double[] latlng_1	= {latitude_1, longitude_1};
		double[] latlng_2 	= {latitude_2, longitude_2};
		System.out.println(latlng_1[0] + "\t" + latlng_1[1]);
		
		double[][] latlng	= { {latitude_1, longitude_1},
								{latitude_2, longitude_2} };
		System.out.println(latlng[0][0] + "\t" + latlng[0][1]);
	}
}
