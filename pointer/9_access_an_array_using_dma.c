//access an array using Dynamic Memory Allocation
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

int main()
{
int n,*a,*b,i;
printf("enter the length of array ");
scanf("%d",&n);

a=(int*)malloc(n*sizeof(int));
b=a;

printf("enter the array\n");
for(i=0;i<n;i++)
{
	scanf("%d",a);
	a++;
}

a = b;
for(i=0;i<n;i++)
{
	printf("%d\t",*a);
	a++;
}

return 1;
}