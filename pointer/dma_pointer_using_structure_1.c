#include<stdio.h>
#include<stdlib.h>
struct student
{
	int a,b;
};
typedef struct student STU;
int main()
{
	STU *ptr;
	ptr=(STU*)malloc(sizeof(STU));
	scanf("%d",&(*ptr).a);
	scanf("%d",&ptr->b);

	printf("%d %d %d\n",&ptr,ptr,*ptr);
	/*
	This generates a warning
	printf("%d\n",&ptr); //ptr is of type STU, but %d is placeholder for int, so you get a warning
    printf("%d\n",&ptr.a);
    printf("%d\n",&ptr.b);*/
	printf("%d\n",ptr->a);
	printf("%d\n",(*ptr).b);

	return 1;
}