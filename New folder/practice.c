#include<stdio.h>
int func( int *,int);
int main()
{
int a[]={1,2,3,4,5};
int *p,i;
p=a;
for(i=0;i<5;i++)
{
printf("%d\n",*p);
p++;
}
return 0;
}
