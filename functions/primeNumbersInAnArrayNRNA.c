//prime numbers_from array_NRNA
#include<conio.h>
#include<stdio.h>
void primeArray();


int main()
{
	primeArray();
// getch();
   return 1;
}

void primeArray()
{
int a[50],n,i,c,j;
printf("enter the length of array ");
scanf("%d",&n);
printf("enter %d array elements\n",n);

for(i=0;i<n;i++)
	{
   scanf("%d",&a[i]);
   }

for(i=0;i<n;i++)
	{
   c=0;
   for(j=1;j<=a[i];j++)
   	{
      if (a[i]%j==0)
      c++;
      }
   if(c==2)
   printf("element %d = %d is a prime number\n",i+1,a[i]);
   }
}