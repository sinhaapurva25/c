/*
Structure
Pointer of a structure_2
*/
#include<stdio.h>
#include<conio.h>
struct student
{
	int a,b;
};
typedef struct student STU;
void main()
{
	STU st;

	STU *ptr;

	ptr=&st;

	scanf("%d",&(*ptr).a);
   scanf("%d",&ptr->b);

	printf("%d\n",ptr);
//	printf("%d\n",&st);
  //	printf("%d\n",&st.a);
	printf("%d\n",ptr->a);
	printf("%d\n",(*ptr).b);


getch();
}

