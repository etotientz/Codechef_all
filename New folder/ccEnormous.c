#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


int main()
{int b,i,a,temp;
int *p;
int n;
scanf("%d",&n);
p=(int *)malloc(n*sizeof(long unsigned int));
fflush(stdin);
scanf("%d",&a);
temp=0;
for(b=0;b<=n-1;b++)
{
scanf("%lu\n",&p[i]);
if(p[i]%a==0)
{temp=temp+1;
}
}
printf("\n%d",temp);
return 0;}
