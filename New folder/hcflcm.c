#include<stdio.h>
int gcd(int ,int );
int main()
{
int a,b,z,lcm;
scanf("%d %d",&a,&b);
z=gcd(a,b);
printf("%d",z);
lcm=a*b/z;
printf("\t%d",lcm);
return 0;
}
int gcd(int x,int y)
{
if(x%y==0)
return(y);
else
    return gcd(y,x%y);
}
