package chapter05;
import java.util.Scanner;


/*
class Circle{
	private int radius;
	public Circle(int radius) { this.radius = radius;}
	public int getRadius() { return radius; }
}

class NamedCircle extends Circle{
	String name;
	NamedCircle(int radius, String name){
		super(radius);
		this.name = name;
	}
	public void show() {
		System.out.println(name + ", ������ = " + getRadius());
	}
}
*/


/*
interface AdderInterface{
	int add(int x, int y);
	int add(int n);
}

class MyAdder implements AdderInterface{
	public int add(int x, int y) {
		return x+y;
	}
	
	public int add(int n) {
		int sum = 0;
		for (int i=0; i<=n; i++) {
			sum = sum + i;
		}
		return sum;
	}
}
*/


/*
abstract class Calculator{
	protected int a, b;
	abstract protected int calc();
	protected void input() {
		Scanner scan = new Scanner(System.in);
		System.out.print("���� 2���� �Է��ϼ���>>");
		a = scan.nextInt();
		b = scan.nextInt();
	}
	public void run() {
		input();
		int res = calc();
		System.out.println("���� ���� " + res);
	}
}

class Adder extends Calculator{
	protected int calc() {
		return a+b;
	}
}

class Subtracter extends Calculator{
	protected int calc() {
		return a-b;
	}
}
*/


/*
class Point{
	private int x, y;
	public Point(int x, int y) { this.x = x; this.y = y; }
	public int getX() { return x; }
	public int getY() { return y; }
	protected void move(int x, int y) { this.x = x; this.y = y; }
}

class ColorPoint extends Point{
	String color;
	public ColorPoint(int x, int y, String color) {
		super(x, y);
		this.color = color;
	}
	
	public void setPoint(int x, int y) {
		move(x, y);
	}
	
	public void setColor(String color) {
		this.color = color;
	}
	
	void show() {
		System.out.println(color + "������(" + getX() + "," + getY() + ")");
	}
}
*/


/*
interface StackInterface{
	int length();
	String pop();
	boolean push(String ob);
}

class StringStack implements StackInterface{
	int length;
	public String str[];
	
	public StringStack() {
		length=0;
		str= new String[10];
	}
	
	public int length() {
		return length+1;
	}
	
	public String pop() {
		return str[--length];
	}
	
	public boolean push(String ob) {
		if(!ob.equals(null)) {
			str[length] = ob;
			//System.out.println(str[length]);
			length++;
			return true;
		}
		else {
			return false;
		}
	}
}
*/


/*
abstract class Shape{
	public abstract void draw();
}

class Line extends Shape{
	@Override
	public void draw() {
		System.out.println("Line");
	}
}

class Rect extends Shape{
	@Override
	public void draw() {
		System.out.println("Rect");
	}
}

class Circle extends Shape{
	@Override
	public void draw() {
		System.out.println("Circle");
	}
}
*/


/*
interface Shape{
	final double PI = 3.14;
	void draw();
	double getArea();
	default public void redraw() {
		System.out.println("--- �ٽ� �׸��ϴ�. ---");
		draw();
	}
}

class Circle implements Shape{
	int radius;
	
	public Circle(int radius) {
		this.radius = radius;
	}
	
	public void draw() {
		System.out.print("������ " + radius);
	}
	
	public double getArea() {
		return PI*radius*radius;
	}
}
*/


public class Main {
	public static void main(String[] args) {
		/*
		NamedCircle w = new NamedCircle(5, "Waffle");
		w.show();
		*/
		
		
		/*
		MyAdder adder = new MyAdder();
		System.out.println(adder.add(5, 10));
		System.out.println(adder.add(10));
		*/
		
		
		/*
		Adder adder = new Adder();
		Subtracter sub = new Subtracter();
		adder.run();
		sub.run();
		*/
		
		
		/*
		ColorPoint cp = new ColorPoint(5, 5, "YELLOW");
		cp.setPoint(10, 20);
		cp.setColor("GREEN");
		cp.show();
		*/
		
		
		/*
		String str;
		StringStack stack = new StringStack();
		Scanner scan = new Scanner(System.in);

		boolean tf = true;
		System.out.print(">>");
		do {
			str = scan.next();
			System.out.println(str);
			tf = stack.push(str);
			System.out.println(tf);
		}while(tf);
		
		System.out.println("!");
		System.out.println(stack.str);
		
		for (int i=0; i<stack.length(); i++) {
			System.out.print(stack.pop() + " ");
		}
		*/
		
		
		/*
		Scanner scan = new Scanner(System.in);
		int n;
		Shape shapeArr[] = new Shape[10];
		int cnt=0;
		
		do {
			System.out.print("����(1), ����(2), ��� ����(3), ����(4)>>");
			n = scan.nextInt();
			
			switch(n) {
			case 1: 
				System.out.print("���� ���� Line(1), Rect(2), Circle(3)>>");
				n = scan.nextInt();
				if(n == 1) {
					shapeArr[cnt] = new Line();
				}
				else if(n == 2) {
					shapeArr[cnt] = new Rect();
				}
				else if(n == 3) {
					shapeArr[cnt] = new Circle();
				}
				cnt++;
				break;
				
			case 2: 
				System.out.print("������ ������ ��ġ>>");
				n = scan.nextInt();
				if(n < cnt) {
					for(int i=n; i<cnt; i++) {
						shapeArr[i] = shapeArr[i+1];
					}
				}
				else if(n == cnt) {
					cnt--;
				}
				else{
					System.out.println("������ �� �����ϴ�.");
				}
				break;
				
			case 3: 
				for(int i=0; i<cnt; i++) {
					shapeArr[i].draw();
				}
				break;
				
			case 4: 
				System.out.println("���α׷��� �����մϴ�...");
				break;
			}
		}while(n != 4);
		*/
		
		
		/*
		Shape coin = new Circle(10);
		//coin.draw();
		coin.redraw();
		System.out.println(" ������ ������ " + coin.getArea());
		*/
	}
}
