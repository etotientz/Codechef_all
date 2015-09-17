#include<stdio.h>
int main()
{
int a=0,b=1,c,n,i;
scanf("%d",&n);
for(i=1;i<n;i++)
{
c=a;
a=b;
b=a+c;
}
printf("%d",b);

return 0;
}
