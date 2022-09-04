//Recursion
#include<stdio.h>
#include<conio.h>
void show(int);
int main()
{
show(5);
// getch();
return 1;
}
void show(int x)
{
if(x<0)
return;
else
{
	printf("hello ");
	show(x-1);
}
}