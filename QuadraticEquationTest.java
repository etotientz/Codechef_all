/**
 * Program: Junit test file for checking nature of quadratic roots
 * Written by: Satrap Rathore (13/CS/48) 
 * Date: 03 Feb, 2016
 */

import junit.framework.TestCase;

public class QuadraticEquationTest extends TestCase {
	
	private int a,b,c;
	protected void setUp() throws Exception {
		super.setUp();
	}

	protected void tearDown() throws Exception {
		super.tearDown();
	}

	/* This method checks for real roots */
	public void test1() {
		a=4;b=5;c=1;
		int answer = 1;
		int returnnature = QuadraticEquation.natureOfRoots (a,b,c);	// stores the nature of root returned
		assertEquals(answer,returnnature);		// Pass the test case if both are equal.
	}
	
	/* This method checks for real and equal roots */
	public void test2() {
		
		a=4;b=4;c=1;
		int answer = 0;
		int returnnature = QuadraticEquation.natureOfRoots (a,b,c);	// stores the nature of root returned
		assertEquals(answer,returnnature);		// Pass the test case if both are equal.
	}
	
	/* This method checks for test failure for imaginary roots.  */
	public void test3() {
		a=2;b=3;c=4;
		int answer = -1;
		int returnnature = QuadraticEquation.natureOfRoots (a,b,c);	// stores the nature of root returned
		assertEquals (answer,returnnature);		// Pass the test case if both are equal.
		
	}
	

}
