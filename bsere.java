import java.util.*;
import java.lang.*;

class bsere{
public static void input(int a[],int size,Scanner obj){
for(int i=0;i<size;i++){a[i]=obj.nextInt();}}

public static int elsea(int a[],int key,int first,int last)
{
if(first>last) return -1;
int mid=(first+last)/2;
if(a[mid]==key)return mid+1;
else if(a[mid]>key)return elsea(a,key,first,mid-1);
else return elsea(a,key,mid+1,last);

}
public static void main(String args[])
{
int i,size,n;
Scanner obj=new Scanner(System.in);
System.out.println("Size");
size=obj.nextInt();
int a[]=new int[size];
input(a,size,obj);

Arrays.sort(a);
System.out.println("Enter number to be searched");
n=obj.nextInt();
int index=elsea(a,n,0,size-1);
prres(index);}
public static void prres(int index){
if(index!=-1)
System.out.println("Found at pos " + (index));
else System.out.println("Not found");
}}

