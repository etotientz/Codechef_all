#include<stdio.h>
int main()
{
struct student
{
int data[10];
};
struct student t;
int *p;
p=&t;
printf("%d",p);
printf("\n%d",sizeof(t));
return 0;
}
