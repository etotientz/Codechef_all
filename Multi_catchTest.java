/**
 * Program to implement testing of Multi_catch.java
 * @ author: Satrap Rathore(13/CS/48)
 * FileName: Multi_catchTest.java
 * Date of creation: 24 Feb,2016
 */
import static org.junit.Assert.*;
import org.junit.Test;


public class Multi_catchTest  {


	private int position;		 // position of array
	private int denominator; 
	private int expectedOutput;

	@Test
	public void arithmaticExceptiontest() 
	{
		//This method checks for success of zero divide
		position = 5;
		denominator=0;
		expectedOutput=1;
		int output= Multi_catch.try_catch(position, denominator);
		assertEquals(expectedOutput,output);
		// pass the test case if both values are equal
	}
	@Test
	public void arithmaticExceptionInvalid()
	{
		//This method checks for failure of zero divide
		position = 5;
		denominator=2;
		expectedOutput=0;
		int output=Multi_catch.try_catch(position,denominator);
		assertEquals(expectedOutput,output);
		// pass the test case if both values are equal
	}
	@Test
	public void arrayOutOfBound() 
	{
		//This method checks for success of array out of bound
		position = 8;
		denominator=4;
		expectedOutput=2;
		int output=Multi_catch.try_catch(position, denominator);
		assertEquals(expectedOutput,output);
		// pass the test case if both values are equal
	}
	@Test
	public void arrayOutOfBoundInvalid()
	{
		//This method checks for failure of array out of bound
		position = 4;
		denominator=6;
		expectedOutput=0;
		int output=Multi_catch.try_catch(position, denominator);
		assertEquals(expectedOutput,output);
		// pass the test case if both values are equal
	}
}
