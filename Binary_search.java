/* Binary Search Program
File Name: Binary Search Java
Created by Satrap Rathore Date:3/2/16
The following program will do Binary Search of a given input element in a sorted integer array in ascending order
*/

import java.util.*;
import java.lang.*;

class Binary_search{

/*This class will take input a sorted integer array,an element to be searched and display
   whether the element is present.If yes,it will display its position.
 */

public static void input(int arr[],int array_size,Scanner input_take){

//This method will be used to take input of the array

for(int loop_count=0;loop_count<array_size;loop_count++)
arr[loop_count]=input_take.nextInt();}

public static int binsea(int arr[],int search_key)
{/*
This method is used to take input the given array and the element to be searched and return the index of the
element if found or return not found result
*/
int first=0;int last=arr.length-1;
int mid=0;
while(first<=last){mid=(first+last)/2;
if(arr[mid]==search_key)break;
else if(arr[mid]>search_key)last=mid-1;
else first=mid+1;}
if(first>last)return -1;
else return mid+1;}
public static void main(String args[])
{
/*This is the main function inside which we will take the input sorted array and the input element by the input method and will call the binsea
to check if the key is present in the array with the binsea method and print the result with the result with the prresult method
 */
int i,array_size,key_search,mid;
//object of Scanner class is formed
Scanner input_take=new Scanner(System.in);
System.out.println("Size");
//array size is taken input
array_size=input_take.nextInt();
int arr[]=new int[array_size];
input(arr,array_size,input_take);
Arrays.sort(arr);
System.out.println("Enter number to be searched");
//the element to be searched is taken as input
key_search=input_take.nextInt();
//index method is called to take do binary search
int index=binsea(arr,key_search);
//the index thus found is passed as argument to prresult to print the result
prresult(index);}
public static void prresult(int index){
//This method prints the result and the index of the element to be searched if it is present in the array
if(index!=-1)
System.out.println("Found at pos " + (index));
else System.out.println("Not found");
}}