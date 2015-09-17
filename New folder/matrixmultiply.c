#include<stdio.h>
int main()
{
int a[4][4],b[4][4],c[4][4],i,j,k,m1,n1,m2,n2,sum=0;
printf("Enter order of 1st matrix");
printf("Rows\n");
scanf("%d",&m1);
printf("\nColumns");
scanf("%d",&n1);
printf("2nd matrix order");
printf("Rows");
scanf("%d",&m2);
printf("Columns");
scanf("%d",&n2);
if(n1!=m2)
{printf("\n matrix multi not possible");
exit (0);
}
else
printf("Enter elements of 1st array");
for(i=0;i<m1;i++)
    {

        for(j=0;j<n1;j++)
            scanf("%d",&a[i][j]);

    }
    printf("\n elements of 2nd array");
    for(i=0;i<m2;i++)
    {

        for(j=0;j<n2;j++)
            scanf("%d",&b[i][j]);
    }
    printf("Matrix Multiplication:");
    for(i=0;i<m1;i++)
    {

        for(j=0;j<n2;j++)
        {

            for(k=0;k<n1;k++)
            {

                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            sum=0;

        }
    }
    for(i=0;i<m1;i++)
    {

        for(j=0;j<n2;j++)
            printf("%d\t",c[i][j]);
        printf("\n");
    }
    return 0;
}
