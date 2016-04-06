/**
 * Program to perform testing of MultipleInheritence.java
 * This program checks that the time taken for concatenation of strings is different
 * Strings of class String and StringBuffer is used
 * @author: Satrap Rathore 13/CS/48
 * Date of Creation: 24 Feb, 2016
 * FileName: MultipleInheritenceTest.java
 */
import static org.junit.Assert.*;
import org.junit.Test;
public class MultipleInheritenceTest 
{
	@Test
	public void test1()
	{
		// This method checks for inheritance at level 2 and invoking of method return_roll_no()
		Results obj1=new Results(10,20,30);
		int output=obj1.return_roll_no();
		int expected=10;
		assertEquals(output,expected);
		// pass the test case if both values are equal
	}
	@Test
	public void test2()
	{
		// This method checks invoking of method return_value and return of valid result()
		Results obj2=new Results(20,20,30);
		int output=obj2.return_value();
		int expected=100;
		assertEquals(output,expected);
		// pass the test case if both values are equal
	}
	@Test
	public void test3()
	{
		// This method checks for inheritance at level 1 and invoking of method return_sec()
		Results obj3=new Results(5,20,30);
		char output=obj3.return_sec();
		char expected='A';
		assertEquals(output,expected);
		// pass the test case if both values are equal
	}
	@Test
	public void test4()
	{
		// This method checks invoking of method return_value and return of invalid result()
		Results obj4=new Results(5,70,70);
		int output=obj4.return_value();
		int expected=280;
		assertNotSame(output,expected);
		// pass the test case if both values are  not equal
	}
	

}
