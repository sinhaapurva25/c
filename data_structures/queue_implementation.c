//queue implementation
#include<stdio.h>
#include<stdlib.h>
#define max 5
void enque(int);
void deque();
void Disp();
int x[max];
int r=-1;
int f=-1;
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
void enque(int data)
{
if (r==max-1)
printf("\noverflow\n");
else
	{
		if(f==-1)
		f=0;

		r++;
		x[r]=data;

	}
}

void deque()
{
	if(f==-1)//(r==-1) is not the case
		printf("\nunderflow\n");
	else
	{
		printf("Deleted element is :%d",x[f]);
		f++;
	}
}

void Disp()
{
int i;
if(r==-1)//(f==-1) is not the case
	printf("underflow");
else
	{
		printf("\nList is \n");
	 for(i=f;i<=r;i++)
	 printf("%d\t",x[i]);
	}
}

