//author Satrap Rathore 13/CS/48 
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.sql.*;
import java.util.*;


class RegistrationFormDesign {

	JLabel label1,label2,label3,label4,label5,label6,label7,label8,label9,label10,label11,label12,s1,s2,s3;
	JPanel panel;
	JFrame jf;
	JButton register;
	JTextField textfield1,textfield2,textfield3,textfield4a,textfield4b,textfield4c,textfield5,textfield6,textfield7,textfield8,textfield9;
	JPasswordField passwordfield1,passwordfield2;
	JRadioButton radiobutton2,radiobutton3;
	String name,gender,dob1,dob2,dob,dobb,password,mobileNumber,email,retype,state,nationality,selectedState;
	JComboBox combobox1;
	Connection con1;
	Statement st1;
	int index;
	String states[] = new String[50];


	public RegistrationFormDesign()
	{
		initComponents();
		event();

	}

	public void initComponents() {
		jf=new javax.swing.JFrame("Registration Form");
		panel=new javax.swing.JPanel();
		jf.add(panel);
		//panel.setBackground(new Color(191,239,255));
		panel.setLayout(null);
		jf.setSize(970,700);
		jf.show();

		label1=new javax.swing.JLabel("Registration Form");
		label1.setFont(new Font("Dialog", Font.ITALIC, 14));
		label1.setBounds(300,20,400,40);
		panel.add(label1);

		label2=new javax.swing.JLabel("Name");
		label2.setFont(new Font("Dialog", Font.BOLD, 14));
		label2.setBounds(100,80,150,40);
		panel.add(label2);

		label3=new javax.swing.JLabel("Gender");
		label3.setFont(new Font("Dialog", Font.BOLD, 14));
		label3.setBounds(100,140,150,40);
		panel.add(label3);

		label4=new javax.swing.JLabel("E-mail");
		label4.setFont(new Font("Dialog", Font.BOLD, 14));
		label4.setBounds(100,200,150,40);
		panel.add(label4);

		label5=new javax.swing.JLabel("Date Of Birth");
		label5.setFont(new Font("Dialog", Font.BOLD, 14));
		label5.setBounds(100,260,150,40);
		panel.add(label5);

		label6=new javax.swing.JLabel("Mobile Number");
		label6.setFont(new Font("Dialog", Font.BOLD, 14));
		label6.setBounds(100,320,150,40);
		panel.add(label6);

		label7=new javax.swing.JLabel("Password");
		label7.setFont(new Font("Dialog", Font.BOLD, 14));
		label7.setBounds(100,380,150,40);
		panel.add(label7);

		label8=new javax.swing.JLabel("re-type Password");
		label8.setFont(new Font("Dialog", Font.BOLD, 14));
		label8.setBounds(100,440,150,40);
		panel.add(label8);

		label9=new javax.swing.JLabel("State");
		label9.setFont(new Font("Dialog", Font.BOLD, 14));
		label9.setBounds(100,500,150,40);
		panel.add(label9);

		textfield1=new javax.swing.JTextField();
		textfield1.setFont(new Font("Dialog", Font.BOLD, 14));
		textfield1.setBounds(350,80,180,30);
		panel.add(textfield1);

		label10=new javax.swing.JLabel("Male");
		label10.setFont(new Font("Dialog", Font.BOLD, 14));
		label10.setBounds(350,140,60,40);
		panel.add(label10);

		label11=new javax.swing.JLabel("Female");
		label11.setFont(new Font("Dialog", Font.BOLD, 14));
		label11.setBounds(460,140,100,40);
		panel.add(label11);

		label12=new javax.swing.JLabel("Nationality");
		label12.setFont(new Font("Dialog", Font.BOLD, 14));
		label12.setBounds(100,560,150,40);
		panel.add(label12);

		radiobutton2=new javax.swing.JRadioButton();
		radiobutton2.setFont(new Font("Dialog", Font.BOLD, 14));
		radiobutton2.setBounds(420,140,20,30);
		panel.add(radiobutton2);

		radiobutton3=new javax.swing.JRadioButton();
		radiobutton3.setFont(new Font("Dialog", Font.BOLD, 14));
		radiobutton3.setBounds(570,140,20,30);
		panel.add(radiobutton3);

		ButtonGroup jb = new ButtonGroup();
		jb.add(radiobutton2);
		jb.add(radiobutton3);


		textfield3=new javax.swing.JTextField();
		textfield3.setFont(new Font("Dialog", Font.BOLD, 14));
		textfield3.setBounds(350,200,180,30);
		panel.add(textfield3);


		textfield4a=new javax.swing.JTextField();
		textfield4a.setFont(new Font("Dialog", Font.BOLD, 14));
		textfield4a.setBounds(350,260,40,30);
		panel.add(textfield4a);

		s1=new javax.swing.JLabel("/");
		s1.setFont(new Font("Dialog", Font.BOLD, 14));
		s1.setBounds(400,260,20,30);
		panel.add(s1);

		textfield4b=new javax.swing.JTextField();
		textfield4b.setFont(new Font("Dialog", Font.BOLD, 14));
		textfield4b.setBounds(430,260,40,30);
		panel.add(textfield4b);

		s2=new javax.swing.JLabel("/");
		s2.setFont(new Font("Dialog", Font.BOLD, 14));
		s2.setBounds(480,260,20,30);
		panel.add(s2);

		textfield4c=new javax.swing.JTextField();
		textfield4c.setFont(new Font("Dialog", Font.BOLD, 14));
		textfield4c.setBounds(510,260,100,30);
		panel.add(textfield4c);

		s3=new javax.swing.JLabel("DD/MM/YYYY");
		s3.setFont(new Font("Dialog", Font.BOLD, 14));
		s3.setBounds(620,260,150,30);
		panel.add(s3);

		textfield5=new javax.swing.JTextField();
		textfield5.setFont(new Font("Dialog", Font.BOLD, 14));
		textfield5.setBounds(350,320,180,30);
		panel.add(textfield5);

		textfield6=new javax.swing.JPasswordField();
		textfield6.setFont(new Font("Dialog", Font.BOLD, 14));
		textfield6.setBounds(350,380,180,30);
		panel.add(textfield6);

		textfield7=new javax.swing.JPasswordField();
		textfield7.setFont(new Font("Dialog", Font.BOLD, 14));
		textfield7.setBounds(350,440,180,30);
		panel.add(textfield7);

		textfield8=new javax.swing.JTextField();
		textfield8.setFont(new Font("Dialog", Font.BOLD, 14));
		textfield8.setBounds(350,500,180,30);
		//panel.add(textfield8);

		textfield9=new javax.swing.JTextField();
		textfield9.setFont(new Font("Dialog", Font.BOLD, 14));
		textfield9.setBounds(350,560,180,30);
		panel.add(textfield9);

		register = new javax.swing.JButton("Register");
		register.setFont(new Font("Dialog", Font.BOLD, 14));
		register.setBounds(250,620,100,30);
		panel.add(register);

		combobox1 = new JComboBox();
		combobox1.setBounds(350,500,180,30);
		combobox1.setFont(new Font("Dialog",Font.BOLD,10));
		panel.add(combobox1);

		states[0] = "Andra Pradesh";
		states[1] = "Arunachal Pradesh";
		states[2] = "Assam";
		states[3] = "Bihar";
		states[4] = "Chhattisgarh";
		states[5] = "Goa";
		states[6] = "Gujarat";
		states[7] = "Haryana";
		states[8] = "Himachal Pradesh";
		states[9] = "Jammu and Kashmir";
		states[10] = "Jharkhand";
		states[11] = "Karnataka";
		states[12] = "Kerala";
		states[13] = "Madya Pradesh";
		states[14] = "Maharashtra";
		states[15] = "Manipur";
		states[16] = "Meghalaya";
		states[17] = "Mizoram";
		states[18] = "Nagaland";
		states[19] = "Orissa";
		states[20] = "Punjab";
		states[21] = "Rajasthan";
		states[22] = "Sikkim";
		states[23] = "Tamil Nadu";
		states[24] = "Tripura";
		states[25] = "Uttaranchal";
		states[26] = "Uttar Pradesh";
		states[27] = "West Bengal";
		states[28] = "Andaman and Nicobar Islands";
		states[29] = "Chandigarh";
		states[30] = "Dadar and Nagar Haveli";
		states[31] = "Daman and Diu";
		states[32] = "Delhi";
		states[33] = "Lakshadeep";
		states[34] = "Pondicherry";



		for (int j= 0 ; j< 35; j++) {
			combobox1.addItem(states[j]);
		}

		gender = "";
	}

	public void event() {

		textfield1.addKeyListener(new KeyAdapter() {
			public void keyTyped(KeyEvent e) {
				char c = e.getKeyChar();
				String sag=textfield1.getText();
				if (!(((c >= 'a')||(c >= 'A')) && ((c <= 'z')||(c <= 'Z')) || (c == KeyEvent.VK_BACK_SPACE) || (c == KeyEvent.VK_DELETE))) {
				e.consume();
				}
			}
		});

		textfield4a.addKeyListener(new KeyAdapter() {
			public void keyTyped(KeyEvent e) {
			  char c = e.getKeyChar();
			  if (!((c >= '0') && (c <= '9') ||
				 (c == KeyEvent.VK_BACK_SPACE) ||
				 (c == KeyEvent.VK_DELETE))) {
			   // getToolkit().beep();
				e.consume();
			  }
			}
		});

		textfield4b.addKeyListener(new KeyAdapter() {
			public void keyTyped(KeyEvent e) {
			  char c = e.getKeyChar();
			  if (!((c >= '0') && (c <= '9') ||
				 (c == KeyEvent.VK_BACK_SPACE) ||
				 (c == KeyEvent.VK_DELETE))) {
			   // getToolkit().beep();
				e.consume();
			  }
			}
		});

		textfield4c.addKeyListener(new KeyAdapter() {
			public void keyTyped(KeyEvent e) {
			  char c = e.getKeyChar();
			  if (!((c >= '0') && (c <= '9') ||
				 (c == KeyEvent.VK_BACK_SPACE) ||
				 (c == KeyEvent.VK_DELETE))) {
			   // getToolkit().beep();
				e.consume();
			  }
			}
		});

		textfield5.addKeyListener(new KeyAdapter() {
			public void keyTyped(KeyEvent e) {
			  char c = e.getKeyChar();
			  if (!((c >= '0') && (c <= '9') ||
				 (c == KeyEvent.VK_BACK_SPACE) ||
				 (c == KeyEvent.VK_DELETE))) {
			   // getToolkit().beep();
				e.consume();
			  }
			}
		});

		/*textfield7.addKeyListener(new KeyAdapter() {
			public void keyTyped(KeyEvent e) {
				char c = e.getKeyChar();
				String sag=textfield1.getText();
				if (!(((c >= 'a')||(c >= 'A')) && ((c <= 'z')||(c <= 'Z')) || (c == KeyEvent.VK_BACK_SPACE) || (c == KeyEvent.VK_DELETE))) {
				e.consume();
				}
			}
		});*/


		textfield9.addKeyListener(new KeyAdapter() {
			public void keyTyped(KeyEvent e) {
				char c = e.getKeyChar();
				String sag=textfield1.getText();
				if (!(((c >= 'a')||(c >= 'A')) && ((c <= 'z')||(c <= 'Z')) || (c == KeyEvent.VK_BACK_SPACE) || (c == KeyEvent.VK_DELETE))) {
				e.consume();
				}
			}
		});

		register.addActionListener(new ActionListener()
		{
			public void actionPerformed(ActionEvent event)
				{

					getUserInformation();
					int i = validation(name,gender,dob1,dob2,dob,password,mobileNumber,email,retype,state,nationality,selectedState);
					JOptionPane.showMessageDialog(null,"Registered Successfully");
					//registerUserData();

				}
		});

		combobox1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent event)
			{
				Object selectedStateobj = combobox1.getSelectedItem();
				selectedState = String.valueOf(selectedStateobj);
				index = combobox1.getSelectedIndex();

			}
		});

		radiobutton2.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				gender = "Male";
			}
		});
		radiobutton3.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				gender = "Female";
			}
		});
	}

	public void getUserInformation() {
		name = textfield1.getText();
		email = textfield3.getText();
		dob = textfield4a.getText();
		dob1 = textfield4b.getText();
		dob2 = textfield4c.getText();
		dobb = dob + "/" + dob1 + "/" + dob2;
		mobileNumber = textfield5.getText();
		password = textfield6.getText();
		retype = textfield7.getText();
		state = selectedState;
		nationality = textfield9.getText();

	}

	public static int validation(String name,String gender,String dob1,String dob2,String dob,String password,String mobileNumber,String email,String retype,String state,String nationality,String selectedState) {
		int count = 0;

		if(name.equals(""))
		{
			JOptionPane.showMessageDialog(null,"Enter Name");
			return 1;
		}
		else if(gender.equals(""))
		{
			JOptionPane.showMessageDialog(null,"Select gender");
			return 2;
		}
		else if(email.equals(""))
		{
			JOptionPane.showMessageDialog(null,"Enter E-Mail address");
			return 3;
		}
		
		else if(dob.equals(""))
		{
			JOptionPane.showMessageDialog(null,"Enter Date");
			return 4;
		}
		else if(dob1.equals(""))
		{
			JOptionPane.showMessageDialog(null,"Enter Month");
			return 5;
		}
		else if(dob2.equals(""))
		{
			JOptionPane.showMessageDialog(null,"Enter Year");
			return 6;
		}

		else if(mobileNumber.equals(""))
		{
			JOptionPane.showMessageDialog(null,"Enter Mobile Number");
			return 7;
		}
		else if(password.equals("") || password.length()<8)
		{
			JOptionPane.showMessageDialog(null,"Password should be atleast 8 characters long");
			return 8;
		}
		else if(retype.equals("") || !retype.equals(password))
		{
			JOptionPane.showMessageDialog(null,"Password doesn't match");
			return 9;
		}

		else if(selectedState.equals(""))
		{
			JOptionPane.showMessageDialog(null,"Select State");
			return 10;
		}
		else if(nationality.equals(""))
		{
			JOptionPane.showMessageDialog(null,"Enter Nationality");
			return 11;
		}
		return 12;
	}


	/*public void registerUserData() {
		try {

		  if(count==1) {
			Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
			con1 = DriverManager.getConnection("jdbc:odbc:user");
			st1 = con1.createStatement();
			st1.execute("INSERT INTO User_Details (Name,Gender,Password,DOB,Mobile_Number,Email,Area,State,Nationality,StateIndex) VALUES('"+name+"','"+gender+"','"+password+"','"+dobb+"','"+mobileNumber+"','"+email+"','"+area+"','"+state+"','"+nationality+"',"+index+")");
			st1.close();
			con1.close();
			JOptionPane.showMessageDialog(null,"Data are Registered Successfully");
		  }

		}
		catch (Exception e) {
			System.out.println("Exception1 is " + e);
		}

	}*/

}

class RegistrationForm {
	public static void main(String args[]) {
		RegistrationFormDesign form = new RegistrationFormDesign();
		System.out.println("Registration Form");

	}
}