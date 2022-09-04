/*
pointers
access 2D array using pointers 
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(void)
{
	int n,m,i,j,*a,*b;
	printf("no. of rows: ");
	scanf("%d",&n);
	printf("no. of columns: ");
	scanf("%d",&m);

	a=(int*)malloc(n*m*sizeof(int));
	b=a;

printf("enter the arrray:\n");
for(i=0;i<n;i++)
	{
	for(j=0;j<m;j++)
		{
		scanf("%d",a);
		a++;
		}
	}
a=b;

printf("the arrray is:\n");
for(i=0;i<n;i++)
	{
	for(j=0;j<m;j++)
		{
		printf("%d\t",*a);
		a++;
		}
	printf("\n");
	}
getch();
}

