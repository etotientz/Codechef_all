#include<stdio.h>
int main()
{
int i,j,k,n,b,a;
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
if(i>1&&i<n+1)
{
for(b=2;b<=i;b++)
{


printf("*");
continue;
}

}
printf("\n");
}
return 0;
}
