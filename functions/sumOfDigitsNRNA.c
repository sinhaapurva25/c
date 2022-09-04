//Sum_of_digits_NRNA
#include<stdio.h>
#include<conio.h>
void sumOfDigits();
int main()
	{
   sumOfDigits();
   // getch();
   return 1;
   }

void sumOfDigits()
{
int n,m,s,k;
printf("enter a number ");
scanf("%d",&n);
m=n;
s=0;

	while(m!=0)
   	{
      k=m%10;
      s=s+k;
      m=m/10;
      }

   printf("sum of digits of the number %d is %d",n,s);
}