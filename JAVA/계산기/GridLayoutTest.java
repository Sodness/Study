package calculator;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;


public class GridLayoutTest extends JFrame {
	public GridLayoutTest() {
		JFrame fr = new JFrame("GridLayoutTest");
		fr.setTitle("°è»ê±â");
		fr.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		fr.setSize(400, 300);
		
		Container con = getContentPane();
		con.setLayout(new BoxLayout(con, BoxLayout.Y_AXIS));
		fr.add(con);
		
		JPanel panel_up = new JPanel();
		panel_up.setLayout(new BoxLayout(panel_up, BoxLayout.Y_AXIS));
		con.add(panel_up);
		
		JLabel calculate = new JLabel("label");
		JTextField result = new JTextField("textfield");
		panel_up.add(calculate);
		panel_up.add(result);
		
		JPanel pn = new JPanel();
		pn.setLayout(new GridLayout(6, 4, 1, 1));
		con.add(pn);
		
		/*
		JButton[] bt = new JButton[24];
		for(int i=0; i<bt.length; i++) {
			bt[i] = new JButton("Button" + i);
			pn.add(bt[i]);
			
		}
		*/
		
		JButton btn_Per = new JButton("%");
		JButton btn_ClearRes = new JButton("CE");
		JButton btn_ClearAll = new JButton("C");
		JButton btn_Backspace = new JButton("Back");
		pn.add(btn_Per);
		pn.add(btn_ClearRes);
		pn.add(btn_ClearAll);
		pn.add(btn_Backspace);
		
		JButton btn_Denominator = new JButton("1/x");
		JButton btn_Square = new JButton("x^2");
		JButton btn_Sqrt = new JButton("sqrt(x)");
		JButton btn_Division = new JButton("/");
		pn.add(btn_Denominator);
		pn.add(btn_Square);
		pn.add(btn_Sqrt);
		pn.add(btn_Division);
		
		JButton btn_7 = new JButton("7");
		JButton btn_8 = new JButton("8");
		JButton btn_9 = new JButton("9");
		JButton btn_X = new JButton("X");
		pn.add(btn_7);
		pn.add(btn_8);
		pn.add(btn_9);
		pn.add(btn_X);
		
		JButton btn_4 = new JButton("4");
		JButton btn_5 = new JButton("5");
		JButton btn_6 = new JButton("6");
		JButton btn_Minus = new JButton("-");
		pn.add(btn_4);
		pn.add(btn_5);
		pn.add(btn_6);
		pn.add(btn_Minus);
		
		JButton btn_1 = new JButton("1");
		JButton btn_2 = new JButton("2");
		JButton btn_3 = new JButton("3");
		JButton btn_Plus = new JButton("+");
		pn.add(btn_1);
		pn.add(btn_2);
		pn.add(btn_3);
		pn.add(btn_Plus);
		
		JButton btn_PlusMinus = new JButton("+/-");
		JButton btn_0 = new JButton("0");
		JButton btn_Dot = new JButton(".");
		JButton btn_Equal = new JButton("=");
		pn.add(btn_PlusMinus);
		pn.add(btn_0);
		pn.add(btn_Dot);
		pn.add(btn_Equal);

		
		fr.setVisible(true);
	}
}
