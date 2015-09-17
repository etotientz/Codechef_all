#include<stdio.h>
int main()
{
int a[6]={32,26,7,14,20,2};
int i,j,t;
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{t=a[j];
if(a[j]>a[j+1])
{
a[j]=a[j+1];
a[j+1]=t;
}}
}
for(i=0;i<6;i++)
printf("%d\t",a[i]);
return 0;}
