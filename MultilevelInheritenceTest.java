/**
 * Program to implement testing of Multilevel Inheritance
 * @author Satrap Rathore 13/CS/48
 * Date of creation:  09 March, 2016
 * FileName: MultilevelInheritence.java
 * This test file checks for inheritance of data members and member functions at two levels of inheritance
 */
import static org.junit.Assert.*;
import org.junit.Test;

public class MultilevelInheritenceTest 
{
	@Test
	public void test1() 
	{
		/**
		 * Testing inheritance at level1
		 * Method Invoked: vehicleType()
		 */
		Jaguar obj1=new Jaguar(1);
		String Expected="Car";
		String output=obj1.vehicleType();
		assertEquals(Expected,output);
		//pass the test case if both values are equal
	}
	@Test
	public void test2() 
	{
		/**
		 * Testing inheritance at level2
		 * Method Invoked: brand()
		 */
		JaguarXZ obj2=new JaguarXZ(1,2);
		String Expected="Brand: Jaguar";
		String output=obj2.brand();
		assertEquals(Expected,output);
		//pass the test case if both values are equal
	}
	@Test
	public void test3() 
	{
		/**
		 * Testing inheritance at level2
		 * Method Invoked: JaguarXZ::brand()
		 */
		JaguarXZ obj3=new JaguarXZ(1,2);
		String Expected="Max: 100Kmph";
		String output=obj3.speed();
		assertEquals(Expected,output);
		//pass the test case if both values are equal
	}
	@Test
	public void test4() 
	{
		// Method Invoked: Jaguar::brand()
		Jaguar obj4=new Jaguar(1);
		String Expected="Max: 90Kmph";
		String output=obj4.speed();
		assertEquals(Expected,output);
		//pass the test case if both values are equal
	}
	

}
