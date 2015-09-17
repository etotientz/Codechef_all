#include<stdio.h>
int main()
{
int i,j,n;
printf("Enter the value of N:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=n;j>=i;j--)
printf("%d",j);
j=n;
printf("\n");
}
return 0;}
