package calculator;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;


public class FrontEnd extends JFrame {
	public FrontEnd() {
		JFrame frame = new JFrame();
		frame.setTitle("°è»ê±â");
		frame.setSize(350, 500);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		
		Container container = getContentPane();
		container.setLayout(new BoxLayout(container, BoxLayout.Y_AXIS));
		frame.add(container);
		
		
		JPanel panel_up = new JPanel();
		panel_up.setLayout(new BoxLayout(panel_up, BoxLayout.Y_AXIS));
		container.add(panel_up);
		
		JLabel calculate = new JLabel("label");
		JTextField result = new JTextField("textfield");
		panel_up.add(calculate);
		panel_up.add(result);
		
		
		JPanel panel_down = new JPanel();
		panel_down.setLayout(new GridLayout(6, 4, 1, 1));
		//panel_down.setPreferredSize(new Dimension(350, 300));
		container.add(panel_down);
		
		JButton btn_Per = new JButton("%");
		JButton btn_ClearRes = new JButton("CE");
		JButton btn_ClearAll = new JButton("C");
		JButton btn_Backspace = new JButton("Back");
		panel_down.add(btn_Per);
		panel_down.add(btn_ClearRes);
		panel_down.add(btn_ClearAll);
		panel_down.add(btn_Backspace);
		
		JButton btn_Denominator = new JButton("1/x");
		JButton btn_Square = new JButton("x^2");
		JButton btn_Sqrt = new JButton("sqrt(x)");
		JButton btn_Division = new JButton("/");
		panel_down.add(btn_Denominator);
		panel_down.add(btn_Square);
		panel_down.add(btn_Sqrt);
		panel_down.add(btn_Division);
		
		JButton btn_7 = new JButton("7");
		JButton btn_8 = new JButton("8");
		JButton btn_9 = new JButton("9");
		JButton btn_X = new JButton("X");
		panel_down.add(btn_7);
		panel_down.add(btn_8);
		panel_down.add(btn_9);
		panel_down.add(btn_X);
		
		JButton btn_4 = new JButton("4");
		JButton btn_5 = new JButton("5");
		JButton btn_6 = new JButton("6");
		JButton btn_Minus = new JButton("-");
		panel_down.add(btn_4);
		panel_down.add(btn_5);
		panel_down.add(btn_6);
		panel_down.add(btn_Minus);
		
		JButton btn_1 = new JButton("1");
		JButton btn_2 = new JButton("2");
		JButton btn_3 = new JButton("3");
		JButton btn_Plus = new JButton("+");
		panel_down.add(btn_1);
		panel_down.add(btn_2);
		panel_down.add(btn_3);
		panel_down.add(btn_Plus);
		
		JButton btn_PlusMinus = new JButton("+/-");
		JButton btn_0 = new JButton("0");
		JButton btn_Dot = new JButton(".");
		JButton btn_Equal = new JButton("=");
		panel_down.add(btn_PlusMinus);
		panel_down.add(btn_0);
		panel_down.add(btn_Dot);
		panel_down.add(btn_Equal);
		
		
		frame.setVisible(true);
		
		
		int m = (int)(frame.getHeight()*0.6);
		panel_down.setPreferredSize(new Dimension(350, m));
		
		JButton btn = new JButton();
		int n = (int)(panel_down.getHeight());
		btn.setText(Integer.toString(n));
		panel_up.add(btn);
		

		
	}

}
