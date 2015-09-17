#include<stdio.h>
#include<stdlib.h>
struct linklist
{
int data;
struct linklist *next;
};
typedef struct linklist node;

int main()
{
node *ptr,*start,*prev;
char y,label;int count=1;
ptr=start=prev=NULL;


label:
   printf("Do you want to create a linked list?Press 'Y' or 'y':\n");
scanf("%c",&y);
if(y=='y'||y=='Y')

{ptr=(node *)malloc(sizeof(node));
printf("Enter data of %d node",count);
scanf("%d",&ptr->data);
count++;


if(start==NULL)
{
start=ptr;
prev=ptr;
}
else
{
prev->next=ptr;
prev=ptr;
}
   goto label;
}
   else exit;


printf("See what you printed");
while(prev->next!=NULL)
{
prev=start;
printf("%d\t",prev->data);
prev=prev->next;
}
return 0;
}
