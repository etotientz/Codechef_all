#include<stdio.h>
#include<malloc.h>
int main()
{
int *p,n,b,i;
scanf("%d",&n);
p=(int *)malloc(n*sizeof(int));

for(i=0;i<n;i++)
{
    scanf("%d",&p[i]);
    b=(p[i]/2)+1;
    printf("%d\n",b);
}
return 0;
}
