#include<stdio.h>
int main()
{
int i,j,space,n,count=1;
printf("Enter no. of lines");
scanf("%d",&n);
space=n;
for(i=1;i<=n;i++)
{
for(j=1;j<space;j++)
{printf(" ");
}
space--;
for(j=1;j<=i;j++)
{
printf("*");
if(i>1&&count<i)
{
printf(" ");
count++;
}
}
count=1;
printf("\n");
}
return 0;
}
