#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,*p,i;
p=(int*) malloc(n*sizeof(int));
printf("No.of elements");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{


    scanf("%d\n",&p[i]);

}
for(i=0;i<n;i++)
    {
        printf("%d",p[i]);

    }

return 0;
}
