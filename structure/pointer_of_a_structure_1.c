/*
Structure
Pointer of a structure_1
*/
#include<stdio.h>
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
	st.a=90;
	st.b=87;
	printf("%d\n",ptr);
//	printf("%d\n",&st);
  //	printf("%d\n",&st.a);
	printf("%d\n",(*ptr).a);
	printf("%d\n",(*ptr).b);
	ptr++;
	printf("%d\n",*ptr);//goes to next mewmory/ out of the structure

}

