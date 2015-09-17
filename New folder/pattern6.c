#include<stdio.h>
int main()
{
int i,k,space,n;
printf("Please enter the number of lines");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
space=i;
for(k=1;k<=i;k++)
{
printf("%d\t",space);
space--;
}
printf("\n");
}
return 0;
}
