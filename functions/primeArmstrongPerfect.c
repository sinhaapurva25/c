//prime_armstrong_perfect
#include<stdio.h>
#include<conio.h>
#include<math.h>

int prime(int);
int armstrong(int);
int perfect(int);
int main()
{
  int n;
  printf("enter a number ");
  scanf("%d",&n);

  (prime(n)==1)?printf("prime number\n"):printf("not prime number\n");

  (armstrong(n)==1)?printf("armstrong number\n"):printf("not armstrong number\n");

  (perfect(n)==1)?printf("perfect number\n"):printf("not perfect number\n");



// getch();
   return 1;
}

int prime(int x)
{
 int i,c;
 c=0;

 for(i=1;i<=x;i++)
 	{
		if(x%i==0)
      c++;
   }
   if(c==2)
   return 1;
   else
   return 0;
}
int armstrong(int x)
{
 int m,c,p,s;
 m=x,c=0,s=0;

 while(m!=0)
 	{
   	m%10;
      c++;
      m=m/10;
	}
   m=x;
 while(m!=0)
 	{
      p=m%10;
      s=s+pow(p,c);
      m=m/10;
   }

   if(s==x)
   return 1;
   else
   return 0;
}
int perfect(int x)
{
	int m,s,p;
   m=x,s=0;
   while(m!=0)
   	{
      	p=m%10;
         s=s+p;
         m=m/10;
      }
   if(s==x)
   return 1;
   else
   return 0;
}
