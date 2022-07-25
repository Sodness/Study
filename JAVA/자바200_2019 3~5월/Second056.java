package second056;
import java.util.ArrayList;
import java.util.List;

public class Second056 {
	public static void main(String[] args) {
		List<Integer> ilist = new ArrayList<Integer>();
		for(int i=1; i<=10; i++) {
			ilist.add(i);
		}
		
		for(int i=0; i<ilist.size(); i++) {
			int m = ilist.get(i);
			System.out.printf("%d\t", m);
		}
		System.out.println();
	}
}
