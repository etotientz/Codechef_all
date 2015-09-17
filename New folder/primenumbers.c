#include<stdio.h>
int main()
{
int a,i;
scanf("%d",&a);
for(i=2;i<a;i++)
{
if(a%i==0)
{
printf("not prime");
exit(1);
}
}
if(a==1)
    printf("Neither prime nor composite");
else
printf("prime");
return 0;
}
