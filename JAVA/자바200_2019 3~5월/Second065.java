package second065;
import java.lang.reflect.Constructor;
import java.lang.reflect.Method;


public class Second065 {
	public static void main(String[] args) {
		Object obj_1 = new Object();
		Class classes = obj_1.getClass();
		System.out.println(classes.getName());
		
		System.out.println("---------constructor----------");	
		Constructor[] constructor = classes.getDeclaredConstructors();
		for(Constructor con : constructor) {
			System.out.println(con.getName());
		}
		
		System.out.println("--------Method---------");
		Method[] method = classes.getMethods();
		for(Method me : method) {
			System.out.println(me.getName());
		}
	}
}
