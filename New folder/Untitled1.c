#include<stdio.h>
int main()
{
int i,j;
i=1;
j=sizeof(i++);
printf("%d %d",j,i);
return 0;
}
