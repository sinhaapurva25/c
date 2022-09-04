//Factorial_NRHA
#include<stdio.h>
#include<conio.h>
void factorial(int);
int main()
{
	int n;
   printf("enter a number ");
	scanf("%d",&n);

	factorial(n);
   // getch();
   return 1;

}

void factorial(int n)
{
   int i,s;
   s=1;
	for(i=1;i<=n;i++)
   	{
      	s=s*i;
      }
   printf("factorial of %d is %d ",n,s);
   return;
}