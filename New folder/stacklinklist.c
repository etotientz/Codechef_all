#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int info;
	struct node *link;
}N;
int main()
{
	N *tos,*ptr,*t,*m;
	int i,j;
	tos=NULL;
	ptr=NULL;
	char ans='y';
	printf("pushing is\n");
	while(ans=='y')
	{
		ptr=(N*)malloc(sizeof(N));
		printf("value");
		scanf("%d",&(ptr->info));
		ptr->link=tos;
		tos=ptr;
		printf("to continue <y/n>:");
		scanf("%c",&ans);
	}
	m=tos;
	printf("stack is\t:");
	while(m!=NULL)
	{
		printf("%d\t",m->info);
		m=m->link;
	}
	printf("\n");
	printf("popping is\n");
	printf("to continue <y/n>:");
	scanf("%c",&ans);
	while(ans=='y')
	{
		tos=tos->link;
		m=tos;
		printf("stack is:\t");
		while(m!=NULL)
		{
			printf("%d\t",m->info);
			m=m->link;
		}
		printf("\n");
		printf("to continue <y/n>:");
		scanf("%c",&ans);
	}
	t=tos;
	while(t!=NULL)
	{
		printf("%d\t",t->info);
		t=t->link;
	}
	t=tos;
	printf("\n peep:\n");
	printf("enter position");
	scanf("%d",&j);
	for(i=1;i<j;i++)
	{
		t=t->link;
	}
	printf("\n%d",t->info);
	return 0;
}
