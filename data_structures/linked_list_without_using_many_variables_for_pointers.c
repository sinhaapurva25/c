//linked list_without using many variables for pointers
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct linklist
	{
		int data;
		struct linklist *ptr;
	};

typedef struct linklist node;

int main()
{
	int choice;
	node *a,*t;
	a=(node*)malloc(sizeof(node));
	t=a;
	do
	{
		printf("Enter a number ");
		scanf("%d",&a->data);

		printf("Press 1 to continue, 2 to stop: ");
/*
What would happen if you press any number other than 1 or 2 and why?
Answer: It will run regardless
*/
		scanf("%d",&choice);
		if(choice==1)
		{
			
            a->ptr=(node*)malloc(sizeof(node));
			a=a->ptr;
		}
	}while(choice!=2);
	a->ptr=NULL;
	a=t;
	while(a!=NULL)
	{
		printf("%d->",a->data);
		//printf("%d->",a);
		a=a->ptr;
	}
	printf("NULL");
	free(a);
	free(t);
// getch();
   return 1;
}
