#include<stdio.h>
#include<math.h>
int main()
{
int i,j,space,n,rem,a;
printf("n?");
scanf("%d",&n);
space=n;
for(i=0;i<n;i++)
{
for(j=1;j<space;j++)
printf(" ");
space--;
a=pow(11,i);
while(a>0)
{
rem=a%10;
printf("%d",rem);
printf(" ");
a/=10;
}
printf("\n");
}
return 0;
}
