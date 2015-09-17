#include<stdio.h>
int fib(int );
int main()
{
 int n;
    scanf("%d",&n);
    printf("%d",fib(n));
    return 0;
}

int fib(int a)
{
    int x;
if(a==0||a==1)
{
    return (a);
}
else
    x=fib(a-1)+fib(a-2);
    return (x);
}
