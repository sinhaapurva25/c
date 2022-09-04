#include<stdio.h>
#include<conio.h>
#include<math.h>

int noOfDigits(int,int);
int reverse(int,int);

int main()
{
int n,m,d;
printf("enter a number ");
scanf("%d",&n);
m=n;
d=noOfDigits(0,m);
printf("\nno. of digits in %d = %d\n",n,d);

printf("\nreverse of %d = %d\n",n,reverse(d,n));
if(reverse(d,n)==n)
	printf("palindrome");
else
	printf("not palindrome");


// getch();
return 1;
}

int noOfDigits(c,m)
{

if (m!=0)
   {
   m%10;
   c++;
   m=m/10;
   noOfDigits(c,m);
   }
else
 return c;
}
int reverse(d,n)
{
while(d!=0)
	{
    return (n%10)*pow(10,d-1)+reverse(d-1,n/10);
   }
}