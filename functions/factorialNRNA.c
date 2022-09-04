//Factorial_NRNA
#include<stdio.h>
#include<conio.h>
void factorial();
int main()
{
	factorial();
   // getch();
   return 1;
}

void factorial()
{
	int i,n,s;
   printf("enter a number");
	scanf("%d",&n);

   s=1;

   for(i=1;i<=n;i++)
   	{
       s=s*i;
      }

	printf("factorial of %d is %d ",n,s);
}