/**
 * Program: Binary Search
 * Written by: Satrap Rathore(13/CS/48) 
 * Date: 03 Feb,2016
 * Input: Number of elements, elements' values, value to be searched
 * Output: Position of the number input by user among other numbers
 */

import java.util.Scanner;

public class BinarySearch {
	
	/* The variables are privately defined in the class. */
	
	int int_size_of_array;
	int int_array_for_search[];
	int int_search_key;
	
	/* This function initializes the variables */
	
	public void initializeVariables () {
		java.util.Scanner in = new Scanner (System.in);
		System.out.println ("Enter the number of elements");
		int_size_of_array = in.nextInt ();	// stores the size of array
		int_array_for_search = new int[int_size_of_array];	// array of int_size_of_array elements
		System.out.println ("Enter the element to be searched");
		int_search_key = in.nextInt ();	// stores element to be searched
		System.out.println ("Enter the "+int_size_of_array+"elements");
		for (int counter = 0; counter<int_size_of_array; counter++) {
			int_array_for_search[counter] = in.nextInt();
		}
		in.close();
		searchElementInArray (0, int_size_of_array-1, int_array_for_search, int_search_key);	//Method call to search in array
	}
	
	/**
	 * This method searches the sorted array for the desired key. It takes the input array and the element to be searched
	 * and return the position of the element in the array otherwise -1.
	 */
	
	public static int searchElementInArray (int int_lower_bound_of_array, int int_higher_bound_of_array, int int_array_for_search[], int int_search_key) {
		int return_position  = 0;
		if (int_lower_bound_of_array<=int_higher_bound_of_array) {
			
			/* Mutant 1 */
			// int int_middle_of_array = (int_lower_bound_of_array - int_higher_bound_of_array) / 2;
			
			/* Mutant 2 */
			// int int_middle_of_array = (int_lower_bound_of_array - int_higher_bound_of_array) / 3;
			
			int int_middle_of_array = (int_lower_bound_of_array + int_higher_bound_of_array) / 2;	//stores the middle position
			if (int_search_key < int_array_for_search[int_middle_of_array]) {
				
				/* Mutant 3 */
				//return_position = searchElementInArray(int_lower_bound_of_array, int_middle_of_array, int_array_for_search, int_search_key);	//searches the first half of the array
				
				return_position = searchElementInArray(int_lower_bound_of_array, int_middle_of_array-1, int_array_for_search, int_search_key);	//searches the first half of the array
		} else if (int_search_key > int_array_for_search[int_middle_of_array]) {
			
			/* Mutant 4 */
			//return_position = searchElementInArray (0, int_higher_bound_of_array, int_array_for_search, int_search_key);//searches the second half of the array
			
			return_position = searchElementInArray (int_middle_of_array+1, int_higher_bound_of_array, int_array_for_search, int_search_key);//searches the second half of the array
		} else return int_middle_of_array+1;
			
			
		} else return -1;
		
		return return_position;
	}

	public static void main(String[] args) {
		BinarySearch bsearch=new BinarySearch();		//creating an object of the class BinarySearch
		bsearch.initializeVariables ();

	}

}