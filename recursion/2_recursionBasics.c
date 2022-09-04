//Recursion basics
/* print all numbers from 1 to n,
print even odd seperately
print sum of natural numbers
print factorial
*/
#include<stdio.h>
#include<conio.h>

void natural(int,int);
void oddEven(int ,int );
int add(int);
int fact(int);
int main()
{
int n;
printf("enter a number ");
scanf("%d",&n);

printf("all natural nos. from 1 to %d:\n",n);
natural(1,n);

printf("\nodd even list:\n");
oddEven(1,n);

printf("\nsum of these numbers: %d\n",add(n));

printf("\nfactorial of %d = %d\n",n,fact(n));

// getch();
return 1;
}

void natural(int i,int n)
{
if (i<=n)
   {
   printf("%d\n",i);
   natural(i+1,n);
   }
else
return;
}

void oddEven(int i,int n)
{
if (i<=n)
   {
   if(i%2==0)
    printf("%d is even\n",i);
   else
    printf("%d is odd\n",i);
   oddEven(i+1,n);
   }
else
return;
}

int add (int n)
{
if(n<=0)
return 0;
else
return (n+add(n-1));
}

int fact(int n)
{
if(n<=0)
return 1;
else
return n*fact(n-1);
}