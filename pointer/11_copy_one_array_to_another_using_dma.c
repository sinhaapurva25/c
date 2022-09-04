//copy one array to another using DMA
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

int main()
	{
	int n,*a,*b,i, *temp;
	printf("enter the length of array ");
	scanf("%d",&n);

	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(n*sizeof(int));
	temp=a;

	//array input and copying
	printf("enter the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",a);
		a++;
	}

	a = temp;
	//array printing
	for(i=0;i<n;i++)
	{
		*b = *a;
		printf("%d\t",*b);
		a++;
		b++;
	}
return 1;
}