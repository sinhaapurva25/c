//nested loop
#include<stdio.h>
struct Date
{
		int d,m,y;
};
struct Student
{
	int p,c,m;
	float t,a;
	struct Date dob;
	struct Date doj;
	/*
	st is a variable of type Student having
	p,c,m (of type int)
	t,a (of type float)
	dob (of type Date)
	doj (of type Date)
	Date is a structure
	This is nested loop
	*/
};
typedef struct Student  STU; //change the name Student to STU
void main()
{
	STU st;
	int x;


}

