/**
 * Program to demonstrate Multiple catch statements
 * @author Satrap Rathore 13/CS/48
 * FileName: Multi_catch.java
 * Date of Creation: 24 Feb,2016
 */
public class Multi_catch 
{

	/**
	 * This function shows multiple catch statements
	 */
	public static int try_catch(int position,int denominator){
		 try{  
			    int array[]=new int[6];  
			    array[position]=30/denominator;  
			} 
		  catch(ArithmeticException e)
		  {
			  return 1;			// return 1 for zero divide
		  }  
		 catch(ArrayIndexOutOfBoundsException e)
		 {
			   return 2;		// return 2 for array out of bound
	     }  
		 return 0;
	}
	public static void main(String args[])
	{
		int x=try_catch(5,8);
		System.out.println(x);
	}
}
