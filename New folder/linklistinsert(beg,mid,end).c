#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
  int info;
  struct node *link;
 }N;
 N* insrtfirst(N*);
 N* insrtend(N*);
 N* insrtany(N*);
 main()
 {
  int i,n,t;
  N *start,*prev,*ptr;

  start=NULL;
  prev=NULL;
  ptr=NULL;
  printf("enter the no.of elements of the linked list: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
	{
	  ptr=(N *)malloc(sizeof(N));
	  if(ptr==NULL)
		 {
			printf("over flow");
			getch();
			exit(0);
		 }
	  printf("enter the element of %d node",i+1);
	  scanf("%d",&(ptr->info));
		ptr->link=NULL;
		 if(start==NULL)
		  {
			  start=ptr;
			  prev=ptr;
			}
		  else
			{
			  prev->link=ptr;
			  prev=ptr;
			}
	  }
	  printf("to insrt at first press 1\nto insrt at end press 2\n");
	  printf("to insert at any position press 3");
	  scanf("%d",&t);
		if(t==1)
		  start=insrtfirst(start);
		if(t==2)
			start=insrtend(start);
		if(t==3)
			 start=insrtany(start);
		ptr=start;
	  printf("\nelements in it are:\n");
		while(ptr!=NULL)
		 {
			printf("%d\t",ptr->info);
			ptr=ptr->link;
		 }
	  getch();
	}
	N* insrtfirst(N *start)
	{
	  N *ptr;
	  ptr=(N *)malloc(sizeof(N));
	  printf("enter value of new node to be inserted at beggining:");
	  scanf("%d",&(ptr->info));
	  ptr->link=start;
	  start=ptr;
	  return(start);
	}
	N* insrtend(N *start)
	{
	  N *ptr,*p;
	  p=start;
	  ptr=(N *)malloc(sizeof(N));
	  while(p->link!=NULL)
		  p=p->link;
	  printf("enter value of new node to be inserted at end:");
	  scanf("%d",&(ptr->info));
	  ptr->link=NULL;
	  if(start==NULL)
		{
		  start=ptr;
		  return(start);
		}
		else
		 {
			p->link=ptr;
			return(start);
		  }
	 }
	 N* insrtany(N *start)
	 {
		int i,p;
		N *ptr,*pr;
	  ptr=(N *)malloc(sizeof(N));
	  printf("enter value of new node to be inserted at any positon:");
	  scanf("%d",&(ptr->info));
	  printf("enter the position to be inserted");
	  scanf("%d",&p);
		pr=start;
	  for(i=1;i<=(p-2);i++)
		 {
			pr=pr->link;
		  }
		  ptr->link=pr->link;
		  pr->link=ptr;
		  return(start);
	  }








