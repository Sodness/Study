package second095;


public class BillboardMain6 {
	public static void main(String[] args) {
		Second093 rfw = new Second093();
		
		String a = "https://www.billboard.com/charts/hot-100";
		rfw.getAllHtml(a);
		
		String str = "data-rank=";
		rfw.getBillboardData(str);
		Second095.printToJSON(rfw.getBillboards(), "D:\\�ڷ�\\��ǻ�� ���α׷���\\�ڹ�200\\2\\2019.05.13\\095\\" + "test" + ".json");
	}
}
