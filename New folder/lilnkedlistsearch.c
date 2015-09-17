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

int main()
{
 int i,j,k,elem;
 n *s;
 int search(n*start,int elem);
 s=createl();
 printf("Enter the element to be searched:");
 scanf("%d",&elem);
 k=search(s,elem);
 if(k!=NULL)
 {
 printf("The element exists in the list at position:%d",k);
 }
 else
 {
	printf("The element does not exist in the list");
 }
return(0);

}
int search(n*start,int elem)
{
	int count=0;
	n*ptr=start;
	while(ptr!=NULL)
	{
		if(elem==ptr->info)
		{
		return(count+1);
		exit;
	    }
	    else
	    {
	    	count++;
			ptr=ptr->link;
	    }
    }
	return(NULL);
}
