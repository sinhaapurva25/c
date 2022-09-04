//stack using linked list
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

void push(int);
void pop();
void display();
void create();
struct linklist
	{
		int data;
		struct linklist *ptr;
	};

typedef struct linklist node;
node *top,*temp;
int main()
{
	create();
	int ch,no;

	while(1)
        {
            printf("\n1. PUSH \n");
            printf("\n2. POP \n");
            printf("\n3. DISPLAY \n");
            printf("\n3. EXIT \n");
            printf("\n   Enter your choice ");
            scanf("%d",&ch);


        switch(ch)
        {
         case 1:
             printf("enter a data ");
             scanf("%d",&no);
             push(no);
             break;
         case 2:
             pop();
             break;
         case 3:
             display();
             break;
         case 4:
             exit(0);
             break;
         default:
             printf("\nqwerty\n");
         }
        }

// getch();
   return 1;
}

void create()
{
 top=temp=NULL;
}

void push(int no)
{
temp=(node*)malloc(sizeof(node));
temp->data=no;
temp->ptr=NULL;

if(top==NULL)
    top=temp;
else
    {
        temp->ptr=top;
        top=temp;
    }
}

void pop()
{
    if(top==NULL)
        printf("\nunderflow\n");
    else
    {
        printf("Deleted element is : %d",top->data);
        temp=top->ptr;
        free(top);
        top=temp;
    }
}

void display()
{
    if(top==NULL)
        printf("\nunderflow\n");
    else
    {
        temp=top;
        while(temp->ptr!=NULL)// same as while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->ptr;
        }


        printf("Null\n");
    }
}


