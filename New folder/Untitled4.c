#include<stdio.h>
int func(int *,int * );
int main()
{


int i,j;
i=20;
j=25;
func(&i,&j);
printf("%d\t %d",i,j);
return 0;
}

    int func(int *p,int *q)
    {
    int a;
    a=*p;
    *p=*q;
    *q=a;
    printf("%d\t%d",*p,*q);
    return 0;
    }
