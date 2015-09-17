#include<stdio.h>
int main()
{
int i,j,n,x=1;
printf("Enter the value of N:");
scanf("%d",&n);
for(i=1;i<n+1;i++)
{
for(j=x;j<=n;j++)
printf("%d",i);
x++;
printf("\n");
}
return 0;}
