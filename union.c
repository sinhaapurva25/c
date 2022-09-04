//union
#include<stdio.h>
union Fort
{
	int a, b;
	float c;
};

void main()
{
	union Fort ft;
	ft.a = 10;
	printf("%d %d\n", ft.a, ft.b);
	ft.b = 20;
	printf("%d %d\n", ft.a, ft.b);
	ft.c = 26.23;
	printf("%d %d\n", ft.a, ft.b);//size of int is 2 bytes, float is 4 bytes
										 //result will be in negative
}

/*a structure having two variables a and b points to two diff. mem. locations
 but a union having two variables a and b points to a single mem. location

*/