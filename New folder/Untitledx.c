#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int main()
{
int *p,i,j,n,t;

printf("enter no. of elements");
scanf("%d",&n);
p=(int *)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
scanf("%d\n",&p[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1;j++)
{t=p[j];
if(p[j]>p[j+1])
{
p[j]=p[j+1];
p[j+1]=t;
}}
}
for(i=0;i<n;i++)
printf("%d\n",p[i]);
return 0;}


