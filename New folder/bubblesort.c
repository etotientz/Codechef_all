#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int main()
{
int *p,i,j,n,t,k;

printf("enter no. of elements");
scanf("%d",&n);
p=(int *)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
printf("enter elements 1 by 1 pressing enter\n");
scanf("%d",&p[i]);
}
//sorting//
for(k=0;k<n;k++)
{


for(i=1;i<n-1;i++)
{
for(j=0;j<=i;j++)
{
if(p[j]>p[j+1])
{t=p[j+1];
p[j+1]=p[j];
p[j]=t;
}
}
}
}
printf("the elements in ascending order are:\n");
for(i=0;i<n;i++)
printf("%d\t",p[i]);
return 0;}

