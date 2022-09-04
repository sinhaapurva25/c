//queue using linked list
#include<stdio.h>
#include<stdlib.h>
void enque(int);
void deque();
void disp();
void create();

struct linklist
	{
		int data;
		struct linklist *ptr;
	};

typedef struct linklist node;
node *f,*r,*temp;

int main()
{
	int choice,no;
	while(1)
	{
		printf("\n1. Enq\n");
		printf("\n2. Deq\n");
		printf("\n3. Display\n");
		printf("\n4. Exit\n");
		printf("\nEnter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
					printf("Enter a number");
					scanf("%d",&no);
					enque(no);
					break;
			case 2:
					deque();
					break;
			case 3:
					Disp();
					break;
			case 4:
					exit(0);
					break;
			default:
					printf("\nyou boka\n");

		}

	}
}

void create()
{
    f=r=temp=NULL;
}
void enque(int no)
{
    temp=(node*)malloc(sizeof(node));
    temp->data=no;
    temp->ptr=NULL;

    if(r==NULL)
        r=f=temp;
    else
    {
        r->ptr=temp;
        r=temp;
    }

}

void deque()
{
     if(f==NULL)
        printf("\nunderflow\n");
    else
    {
        printf("Deleted element is : %d",f->data);
        temp=f->ptr;
        free(f);
        f=temp;
    }
}

void Disp()
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

