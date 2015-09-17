#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct linklist
{
int data;
struct linklist *next;
};
typedef struct linklist node;

int main()
{
node *ptr,*start,*prev;
char y;
int count=1;
ptr=NULL;
start=NULL;
prev=NULL;

ptr=(node *)malloc(sizeof(node));
printf("Enter data of %d node",count);
scanf("%d",&(ptr->data));
ptr->next=NULL;
start=ptr;
prev=ptr;
count++;

printf("Do you want to create a linked list?Press'y':\n");
scanf("%c",&y);

while(y=='y')
{


ptr=(node *)malloc(sizeof(node));
printf("Enter data of %d node",count);
scanf("%d",&(ptr->data));
ptr->next=NULL;
count++;
prev->next=ptr;
prev=ptr;
}

printf("See what you printed");
prev=start;
while(prev->next!=NULL)
{
printf("%d\t",prev->data);
prev=prev->next;
}
return 0;
}
