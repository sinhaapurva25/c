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
//	printf("%d\n",&st);
//	printf("%d\n",&st.a);



	printf("%d\n",ptr->a);
	printf("%d\n",(*ptr).b);
	
	return 1;
}