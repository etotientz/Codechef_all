#include<stdio.h>
#include<malloc.h>
int main()
{
int i,j,n,*a,t,k;
printf("Input the Number of elements you want to enter\n");
scanf("%d",&n);
a=(int *)malloc(n*sizeof(int));
printf("\nNow enter the elements 1 by 1 ");
for(i=0;i<n;i++)

scanf("%d",&a[i]);
printf("The elements you entered are:\n");
for(i=0;i<n;i++)

printf("%d\t",a[i]);
for(k=2;k<n;k++)
{
t=a[k];
j=k-1;
while(t<a[j])
{
a[j+1]=a[j];
j--;
}
a[j+1]=t;
}
printf("The elements in ascending order are:");
for(i=0;i<n;i++)
    printf("%d\t",a[i]);
return 0;
}
