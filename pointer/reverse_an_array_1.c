/*
reverse an array
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int n,*ptr,i,*t;
	printf("enter the size of array ");
	scanf("%d",&n);

	ptr=(int*)malloc(n*sizeof(int));
	t=(int*)malloc(n*sizeof(int));

	printf("enter the array:\n");
	for(i=0;i<n;i++)
		{
		scanf("%d",ptr++);
		
		}
	ptr--;
	printf("reverse array:\n");

	for(i=n-1;i>=0;i--)
		{
			*t=*ptr;
			printf("%d\t",*t);
			t++;
			ptr--;
	    }
// getch();
return 1;
}