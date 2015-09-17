#include<stdio.h>
int fact(int);
int main()
{
int i,z;
scanf("%d",&i);
z=fact(i);
printf("%d",z);
return 0;
}
int fact(int a)
{
int d;
if(a==1)

return (1);
else
    d=a*fact(a-1);
    return(d);

}
