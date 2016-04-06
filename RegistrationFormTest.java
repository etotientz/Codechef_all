//author Satrap Rathore 13/CS/48
import static org.junit.Assert.*;

import javax.swing.JTextField;

import junit.framework.TestCase;

import org.junit.After;
import org.junit.Before;
import org.junit.Test;


public class RegistrationFormTest extends TestCase{

	private int errorNum;

	@Before
	public void setUp() throws Exception {
		super.setUp();
	}

	@After
	public void tearDown() throws Exception {
		super.tearDown();
	}

	@Test
	public void testName() {
		int errorNum=1;
		String name= "";
		String gender= "female";
		String dob1 = "18";
		String dob2 = "10";
		String dob = "1996";
		String password = "123456789";
		String mobileNumber= "1234567890";
		String email="gorthi";
		String retype="123456789";
		String state="Assam";
		String nationality="Indian";
		String selectedState="Assam";
		int num = RegistrationFormDesign.validation(name,gender,dob1,dob2,dob,password,mobileNumber,email,retype,state,nationality,selectedState);
		assertEquals(errorNum,num);
	}

}