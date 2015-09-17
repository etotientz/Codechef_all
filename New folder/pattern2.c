#include<stdio.h>
int main()
{
int i,j,k,n;
printf("enter no.of lines");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=n;j>i;j--)
{
printf(" ");
}
j=n;

for(k=1;k<=i;k++)
{
    printf("*");

}
printf("\n");
}
return 0;
}
