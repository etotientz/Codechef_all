/**
 * Program: Nature of quadratic roots
 * Written by: Satrap Rathore (13/CS/48) 
 * Date: 03 Feb, 2016
 * Input: Coefficients of x^2, x and constant term of the quadratic equation a*x^2+b*x+c=0
 * Output: Nature of the roots of quadratic equation
 */

import java.util.*;
public class QuadraticEquation {
	
	static float variable1;		// Coefficient of x^2
	static float variable2;		// Coefficient of x
	static float variable3;		// Constant term
	
	/* This function initializes the variables */
	public void initializeVariables () {
		
		Scanner input = new Scanner (System.in);
		
		System.out.println("Enter the co-efficient for x(sq):");
		variable1 = input.nextInt();
		
		System.out.println("Enter the co-efficient for x:");
		variable2 = input.nextInt();
		
		System.out.println("Enter the co-efficient for the constant term:");
		variable3 = input.nextInt();
		
		input.close();
		
	}

	/* This method returns the nature of roots */
	public static int natureOfRoots ( float a, float b, float c) {
		
		float float_discriminant;
		
		/* Mutant 1 */
		//float_discriminant = b*b + 4*a*c;
		
		/* Mutant 2 */
		//float_discriminant = b*b - 4*c*c;
		
		/* Mutant 3 */
		//float_discriminant = b*c - 4*a*c;
		
		float_discriminant = b*b - 4*a*c;
		int int_nature_of_root;
		
		if (float_discriminant > 0) {
			int_nature_of_root = 1;		// Real roots
		}else if (float_discriminant == 0) {
			int_nature_of_root = 0;		// Real and Equal roots
		}else {
			int_nature_of_root = -1;	// Imaginary roots
		}
		
		return int_nature_of_root;
	}
	
	public static void main(String[] args) {
		QuadraticEquation quadRoots = new QuadraticEquation ();
		
		int nature_of_roots = quadRoots.natureOfRoots (variable1, variable2, variable3);
		
		if (nature_of_roots==1) {
			System.out.println ("Real and unequal roots\n");
		}
		else if (nature_of_roots == 0) {
			System.out.println ("Equal roots");
		}
		else{
			System.out.println ("Imaginary roots");
		}

	}

}
