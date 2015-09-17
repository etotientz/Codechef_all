#include<stdio.h>

int main()
{
int i,j=0,bin[15],r,n;
printf("Enter a decimal no.");
scanf("%d",&n);
while(n!=0)
{
r=n%2;
bin[j]=r;
n=n/2;
j++;
}
bin[j]=n;
printf("\n the binary is:");
for(i=j;i>=0;i--)
{
printf("%d",bin[i]);
}
return 0;
}
