#include<stdio.h>
int main()
{
int i,j,space,n;
printf("enter the no.of lines ");
scanf("%d",&n);
space=n;
for(i=1;i<=n;i++)
{


for(j=1;j<space;j++)
printf(" ");
space--;
for(j=1;j<=(2*i-1);j++)
printf("*");
printf("\n");
}
return 0;
}
