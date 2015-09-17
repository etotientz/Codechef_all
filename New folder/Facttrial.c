#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int main()
{
int i,n,a;
int *p,*q;
scanf("%d\n",&n);
p=(int *)malloc(n*sizeof(int));
q=(int *)malloc(n*sizeof(int));
for(a=0;a<n;a++)

scanf("%d\n",p[a]);
for(a=0;a<n;a++)
{
    long int d=0;

for(i=5;i<=p[a];i*=i)
{
d=(p[a]/i)+d;
}

q[a]=d;
}
for(i=0;i<n;i++)
{

    printf("%d\n",q[i]);

}
return 0;
}
