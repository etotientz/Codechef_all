/**
 * Program to perform testing of Diff.java
 * This program checks that the time taken for concatenation of strings is different
 * Strings of class String and StringBuffer is used
 * @author: Satrap Rathore 13/CS/48
 * Date of Creation: 24 Feb, 2016
 * FileName: DiffTest.java
 */
import static org.junit.Assert.*;
import org.junit.Test;

public class DiffTest
{
	
	private long time1;
	private long time2;

	@Test
	public void testConcat() 
	{
		/**
		 * This method tests for the time taken by concatenation of strings
		 * The method generates calls to two methods:
		 * 1) time_string(): computes time taken for concatenation by String class
		 * 2) time_stringbff(): computes time taken for concatenation by StringBuffer class
		 */
		String A="hello";
		String B="java";
		StringBuffer C=new StringBuffer("hello");
		StringBuffer D=new StringBuffer("java");
		time1=Diff.time_string(A,B);// time taken by String class
		time2=Diff.time_stringbff(C,D);//time taken by StringBuffer class
		assertNotSame(time1,time2);
		//pass the test case if two values are not equal
		
	}


	

}
