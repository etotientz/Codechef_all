#include<stdio.h>
long long int power(int,long long int);
int main()
{
long long int i,a,t;
while(t>0)
{
scanf("%d",&a);
i=power(2,a);
printf("%d",i-1);
}
return 0;
}
long long int power(int x,long long int a)
{
    int mid;
if(a==0)
return 1;
if(a==1)
return 2;
if(a%2==0)
{
mid=power(x,a/2);
return mid*mid;
}
else
    {
mid=power(x,a/2);
return mid*mid*2;
}
}
