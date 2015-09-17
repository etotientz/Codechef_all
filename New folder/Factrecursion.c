#include<stdio.h>
int fact(int );
int main()
{
int n,i,p,z;
scanf("%d\n",&n);
for(i=1;i<=n;i++)
{
scanf("%d\n",&p);
z=fact(p);
printf("%d\n",z);
}
return 0;
}

int fact(int p)
{
int a,z=1;
for(a=1;a<=p;a++)
z=z*a;
return(z);
}
