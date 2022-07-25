package second066;

public class Second066 {
	public static void main(String[] args) {
		String city_1 = "Asia";
		String city_2 = "Europe";
		String city_3 = new String("Asia");
		String city_7 = "Asia";
		System.out.println(city_1);
		System.out.println(city_1.length());
		System.out.println(city_1 == city_2);
		System.out.println(city_1.equals(city_2));
		System.out.println(city_1 == city_3);
		System.out.println(city_1 == city_7);
		System.out.println(city_1.equals(city_3));
		System.out.println(city_1.equals(city_7));
		
		String city_4 = String.format("%s-%s", city_1, city_2);
		System.out.println(city_4);
		String city_5 = city_1 + "-" + city_2 + 1 + 2;
		System.out.println(city_5);
		String city_6 = 1 + 2 + city_1 + "-" + city_2;
		System.out.println(city_6);
	}
}
