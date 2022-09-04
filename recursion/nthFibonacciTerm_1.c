/*
nth fibonacci term
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void fibo(int,int);
int a=0,b=1,c;


int main()
{
/*global variable*/
int s,e;

printf("enter end range");
scanf("%d",&e);
//printf("%d\t",0);
fibo(0,e-2);
printf("%d",c);
// getch();
return 1;
}

void fibo(int s,int e)
{
if (s>e)
	return;
else
	{
	c=a+b;
	//printf("%d\t",c);
	a=b;
	b=c;
	fibo(s+1,e);
	}
}