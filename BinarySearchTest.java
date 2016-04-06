/**
 * Program to test BinarySearch.java
 * @ author: Satrap Rathore (13/CS/48)
 * FileNmae: BinarySearchTest.java
 * Date of Creation: 03 Feb, 2016
 */
import junit.framework.TestCase;

public class BinarySearchTest extends TestCase {

	private int search;
	public BinarySearchTest(String testName){
		super(testName);
	}
	protected void setUp() throws Exception{
		   super.setUp();
	   }
	 protected void tearDown() throws Exception{
		   super.tearDown();
		   
		   
	   }
	 
	 /* This method checks single element array success */
	 public void testBinary1(){
		 
		  search =17;  
		  int array[]={17};
		  int index =1;
		  int indexreturn=BinarySearch.searchElementInArray(0,1,array,search);
		  assertEquals(indexreturn,index);	// Pass the test case if both are equal.
		 
	 }
	 
	 /*This method checks single element failure case */
	 public void testBinary2(){
		 
		  search =0;  
		  int array[]={17};
		  int index =-1;
		  int indexreturn=BinarySearch.searchElementInArray(0,1,array,search);
		  assertEquals(indexreturn,index);	// Pass the test case if both are equal.
		 
	 }
	 
	 /* This method checks multiple element array first index boundary case. */
	 public void testBinary3(){
		
		   search =17;  
		   int index =1;
		   int array[]={17,21,23,29};
		   int indexreturn=BinarySearch.searchElementInArray(0,3,array, search);
		   System.out.println(indexreturn);
		   assertEquals(indexreturn,index);	// Pass the test case if both are equal.
	   }
	 
	 /* This method checks multiple element array last index boundary case. */
	 public void testBinary4(){
		 
		  search =45;  
		  int index =7;
		  int array[]={9,16,18,30,31,41,45};
		  int indexreturn=BinarySearch.searchElementInArray(0,6,array,search);
		   assertEquals(indexreturn,index);	// Pass the test case if both are equal.
	  }
	 
	 /* This method checks multiple element array middle index case. */
	 public void testBinary5(){
		 
		  search =23;  
		  int index =4;
		  int array[]={17,18,21,23,29,38,41};
		  int indexreturn=BinarySearch.searchElementInArray(0,6,array,search);
		  assertEquals(indexreturn,index);	// Pass the test case if both are equal.
	  }
	 
	 /* This method checks multiple element array where element to be searched is in the left half. */
	 public void testBinary6(){
		 
		  search =21;  
		  int array[]={17,18,21,23,29,33,38};
		  int index =3;
		  int indexreturn=BinarySearch.searchElementInArray(0,6,array,search);
		  assertEquals(indexreturn,index);	// Pass the test case if both are equal.
		 
	 }
	 /* This method checks multiple element array where element to be searched is in the right half. */
	 public void testBinary7(){
		 
		  search =23;  
		  int index =4;
		  int array[]={12,18,21,23,32};
		  int indexreturn=BinarySearch.searchElementInArray(0,4,array,search);
		   assertEquals(indexreturn,index);	// Pass the test case if both are equal.
	   }
	 
	 /* This method checks multiple element array where element is not present. */
	 public void testBinary8(){
		 
		  search =25;  
		  int array[]={21,23,29,33,38};
		  int index =-1;
		  int indexreturn=BinarySearch.searchElementInArray(0,4,array,search);
		  assertEquals(indexreturn,index);	// Pass the test case if both are equal.
		 
	 }
	/* This method checks in an empty array */
	 public void testBinary9(){
		 
		  search =25;  
		  int array[]={};
		  int index =-1;
		  int indexreturn=BinarySearch.searchElementInArray(0,-1,array,search);
		  assertEquals(indexreturn,index);	// Pass the test case if both are equal.
		 
	 }

}