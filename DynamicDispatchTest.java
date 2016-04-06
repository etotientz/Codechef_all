import static org.junit.Assert.*;
import org.junit.Test;

/**
 * Program to implement testing of Dynamic method Dispatch
 * @author Satrap Rathore 13/CS/48
 * Date of creation: 09 March, 2016
 * FileName: DynamicDispatchTest.java
 * This test file checks for overriding of and member functions at levels of inheritance
 */
public class DynamicDispatchTest 
{

	@Test
	public void test1() 
	{
		// This method creates the reference of an object that refers to the object of the same class
		Jaguar obj=new Jaguar(1);
		Jaguar obj1;
		obj1=obj;
		String Expected="Max: 90Kmph";
		String output=obj1.speed();
		assertEquals(Expected,output);
		//pass the test case if both values are equal
	}
	@Test
	public void test2() 
	{
		// This method creates the reference of an object that refers to the object of the subclass
		JaguarXZ obj=new JaguarXZ(1,2);
		Jaguar obj1;
		obj1=obj;
		String Expected="Max: 100Kmph";
		String output=obj1.speed();
		assertEquals(Expected,output);
		//pass the test case if both values are equal
	}
	@Test
	public void test3() 
	{
		//Method invokes the method Jaguar::speed()
		//Method invokes the method JaguarXZ::speed()
		Jaguar obj1=new Jaguar(1);
		JaguarXZ obj2=new JaguarXZ(1,2);
		String output1=obj1.speed();
		String output2=obj2.speed();
		assertNotSame(output1,output2);
		//pass the test case if both values are not equal
	}

}
