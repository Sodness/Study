package second064;

public class Second064 {
	public static void main(String[] args) {
		Object obj_1 = new Object();
		Object obj_2 = new Object();
		
		System.out.println(obj_1.hashCode());
		System.out.println(Integer.toHexString(obj_1.hashCode()));
		System.out.println(obj_1==obj_2);
		System.out.println(obj_1.equals(obj_2));
		System.out.println(obj_1);
		System.out.println(obj_2.toString());
		
		System.out.println(obj_1.getClass().getName());
		String str = obj_1.getClass().getName() + "@"
				+ Integer.toHexString(obj_1.hashCode());
		System.out.println(str);
		
		Object objstr = new String("Good");
		System.out.println(objstr.toString());
		System.out.println(objstr instanceof Object);
		System.out.println(objstr instanceof String);
		
		String hello = "hello";
		System.out.println(hello.getClass());
	}
}
