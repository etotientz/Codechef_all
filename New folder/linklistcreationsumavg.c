#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
	int info;
	struct node*link;
}n;
n* createl()
{
int i,j,m,x;
n *start,*prev,*ptr;
 printf("enter the no. of elements :");
 scanf("%d",&m);
 start=NULL;
 prev=NULL;
 ptr=NULL;
 for(i=0;i<m;i++)
 {ptr=(n*)malloc(sizeof(n));
 printf("enter the element %d: ",i+1);
 scanf("%d",&x);
 ptr->info=x;
 ptr->link=NULL;
 if(start==NULL)
 {start=ptr;
 prev=ptr;
 }
 else
 {
 	prev->link=ptr;
 	prev=ptr;

 }
 }
 return (start);
}
int avg(n*start)
{
	int count=0,sum=0,avg;
	n*ptr=start;
	while(ptr!=NULL)
	{
		count++;
		sum=sum+ptr->info;
		ptr=ptr->link;
	}
	printf("The sum of the elements:%d\n\n",sum);
	avg=sum/count;
	return(avg);
}
int main()
{int i,j,k;n *s;
s=createl();
k=avg(s);
printf("The average of the numbers:%d",k);
return(0);

}
