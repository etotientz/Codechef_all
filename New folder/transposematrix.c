#include<stdio.h>
int main()
{
int a[5][5],i,j,temp;
printf("Enter the elements of the matrix 3*3");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
}
printf("The matrix you wrote:");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
for(i=0;i<3;i++)
{
for(j=i+1;j<3;j++)
temp=a[i][j];
a[i][j]=a[j][i];
a[j][i]=temp;
}
printf("the transposed matrix:");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
return 0;
}
