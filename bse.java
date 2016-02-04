import java.util.*;
import java.lang.*;

class bse{
public static void input(int a[],int size,Scanner obj){
for(int i=0;i<size;i++){a[i]=obj.nextInt();}}

public static int elsea(int a[],int key)
{
int first=0;int last=a.length-1;
int mid=0;
while(first<=last){mid=(first+last)/2;
if(a[mid]==key)break;
else if(a[mid]>key)last=mid-1;
else first=mid+1;}
if(first>last)return -1;
else return mid+1;}
public static void main(String args[])
{
int i,size,n,mid;
Scanner obj=new Scanner(System.in);
System.out.println("Size");
size=obj.nextInt();
int a[]=new int[size];
input(a,size,obj);
//for(i=0;i<size;i++)
//a[i]=obj.nextInt();
Arrays.sort(a);
System.out.println("Enter number to be searched");
n=obj.nextInt();
int index=elsea(a,n);
prres(index);}
public static void prres(int index){
if(index!=-1)
System.out.println("Found at pos " + (index));
else System.out.println("Not found");
}}

