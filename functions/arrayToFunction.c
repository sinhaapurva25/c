/*
array to function
*/
#include<stdio.h>
#include<conio.h>
void getval(int[],int);
void print(int[],int);

int main()
{
	int x[20],n;
	int y[20],m;
	printf("enter the size of first array ");
	scanf("%d",&n);
	printf("enter the elements of first array\n");
	getval(x,n);
	printf("elements of first array are\n");
	print(x,n);

	printf("\n\n\n");

	printf("\n\nenter the size of second array ");
	scanf("%d",&m);
	printf("enter the elements of second array\n");
	getval(y,m);
	printf("elements of second array are\n");
	print(y,m);

	// getch();
   return 1;
}

void getval(int x[],int n)
{
 int i=0;
 while(i<n)
 {
	scanf("%d",&x[i]);
	i++;
 }
}
void print(int x[],int n)
{
int i=0;
 while(i<n)
 {
	printf("%d\t",x[i]);
	i++;
 }
}


