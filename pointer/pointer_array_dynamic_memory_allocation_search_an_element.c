/*
Pointer
array dynamic memory allocation
search an element
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int n,*ptr,*q,*t,i,flag;
printf("enter the length of array ");
scanf("%d",&n);

ptr=(int*)malloc(n*sizeof(int));
t=ptr;
printf("enter the array\n");
for(i=0;i<n;i++)
	{
	scanf("%d",ptr);
	ptr++;
	}

printf("enter a number to search ");
q=(int*)malloc(sizeof(int));
scanf("%d",q);

flag=0;

for(i=0;i<n;i++)
	{
	if(*t==*q)
		{
			printf("element %d found at %d",*q,i+1);
			/* t prints the memory address
			printf("element %d found at %d",*q,t);
			*/
			flag=1;
			break;
		}
	t++;
	}
if(flag==0)
	printf("element not found");
getch();
}

