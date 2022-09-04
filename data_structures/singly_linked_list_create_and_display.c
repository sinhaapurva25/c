// create and display Singly Linked List
// check linked_list_w3schools
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create();
void list(int);
void disp();

struct linklist
	{
		int data;
		struct linklist *ptr;
	};

typedef struct linklist node;
node *f,*r,*temp;

int main()
{
int i,n,num;
printf("enter the no of elements ");
scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter data at position %d ",i);
   	scanf("%d",&num);
		list(num);
	}

   disp();
// getch();
   return 1;
}

void create()
{
    f=r=temp=NULL;
}
void list(int num)
{
    temp=(node*)malloc(sizeof(node));
    temp->data=num;
    temp->ptr=NULL;

    if(r==NULL)
        r=f=temp;
    else
    {
        r->ptr=temp;
        r=temp;
    }

}


void disp()
{

if(f==NULL)
        printf("\nunderflow\n");
    else
    {
        temp=f;
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->ptr;
        }
        printf("Null\n");
    }
}