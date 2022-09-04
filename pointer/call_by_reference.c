//Pointer call by reference

#include<conio.h>
#include<stdio.h>
void swap(int*,int*);
int main()
{
	int x,y;
	printf("enter two numbers\n");
	scanf("%d%d",&x,&y);
	printf("\nbefore swap \n");
	printf("x = %d  ",x);
	printf("y = %d\n",y);

	swap(&x,&y);

	printf("\nafter  swap in main \n");
	printf("x = %d  ",x);
	printf("y = %d\n",y);
return 1;
}

void swap(int *x,int *y) //address can only be stored in pointer type variable
{
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
	printf("\nafter swap \n");
	printf("x = %d ",*x);
	printf("y = %d\n",*y);
}

/*
CBV,CBR difference
swapping using function
*/