/**
 * program to indicate the difference in performance of strings in class String and StringBuffer 
 * @author Satrap Rathore  13/CS/48
 * Date of Creation: 24 Feb, 2016
 * FileName: Diff.java
 */
public class Diff
{
	
	   public static String concatWithString(String str1,String str2)    
	   {
		   /** This method performs concatenation of strings using String class
		    *  Inputs to the method: two strings of the class String named str1,str2
		    *  Returns: the concatenated string 
		    */
	        for (int iterator=0; iterator<5000; iterator++)
	        {  
	            str1 = str1 + str2;  
	        }  
	        // performing concatenation of strings 5000 times
	        return str1;  
	    } 
	    public static String concatWithStringBuffer(StringBuffer str1,StringBuffer str2)
	    {  
	    	/** This method performs concatenation of strings using StringBuffer class
			 *  Inputs to the method: two strings of the class StringBuffer named str1,str2
			 *  Returns: the concatenated string 
			 */
	    	for (int iterator=0; iterator<5000; iterator++)
	    	{  
	            str1.append(str2);  
	        }
	    	// performing concatenation of strings 5000 times
	        return str1.toString();  
	    } 
	    
	    public static long time_string(String str1,String str2)
	    {
	    	/** This method computes the time taken for concatenation of strings using String class
			 *  This method calls method concatWithString(String str1,String str2)
			 *  Inputs to the method: two strings of the class String named str1,str2
			 *  Returns: the time taken for concatenation of string 
			 */
	        long  startTime = System.currentTimeMillis(); // indicates start time of concatenation  
	        concatWithString(str1,str2);  
	        long endTime= System.currentTimeMillis()-startTime;// indicates end time of concatenation 
	        return endTime;
	    }
	    
	    public static long time_stringbff(StringBuffer str1,StringBuffer str2)
	    {
	    	/** This method computes the time taken for concatenation of strings using StringBuffer class
			 *  This method calls method concatWithStringBuffer(String str1,String str2)
			 *  Inputs to the method: two strings of the class StringBuffer named str1,str2
			 *  Returns: the time taken for concatenation of string 
			 */
	        long  startTime = System.currentTimeMillis();// indicates start time of concatenation  
	        concatWithStringBuffer(str1,str2);  
	        long endTime= System.currentTimeMillis()-startTime;// indicates end time of concatenation 
	        return endTime;
	    }

	public static void main(String[] args)
	{
		 String A="good";
         String B="day";
         StringBuffer C = new StringBuffer("good");
         StringBuffer D = new StringBuffer("day");
         long var3=time_string(A,B);
          System.out.println("string"+var3);
          //time taken for concatenation of strings using class String
          long var4=time_stringbff(C,D);
          System.out.println("string bffer"+var4);
        //time taken for concatenation of strings using class StringBuffer
          
	}

}
