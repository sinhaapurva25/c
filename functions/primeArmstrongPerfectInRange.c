//prime_strong_armstrong_perfect_within range_using function
#include<stdio.h>
#include<conio.h>
#include<math.h>

void prime(int,int);
void strong(int,int);
void armstrong(int,int);
void perfect(int,int);

int main()
{
	int x,y;
	printf("enter start and end values\n");
	scanf("%d %d",&x,&y);

	prime(x,y);
	strong(x,y);
	armstrong(x,y);
   perfect(x,y);


// getch();
   return 1;
}


void prime(int x,int y)
{
	printf("\nprime numbers in range %d to %d are:\n",x,y);
   int i,j,c,flag;
   flag=0;
	for(i=x;i<=y;i++)
   	{
       c=0;
       for(j=2;j<=i/2;j++)
       	{
          	if(i%j==0)
            	{
            		c=1;
                  break;
                }
        }
      	if(c==0)
        {
			flag=1;
			printf("\n%d",i);
	    }
    }
   if(flag==0)
   printf("none\n");
return;
}

void strong(int x,int y)
{
printf("\nstrong numbers in range %d to %d are:\n",x,y);
   int i,n,j,s,f,p,flag;
   flag=0;
	for(i=x;i<=y;i++)
   	{
       n=i;
       s=0;
       while(n!=0)
       	{
         f=1;
         p=n%10;

         for(j=1;j<=p;j++)
            f=f*j;
         s=s+f;
         n=n/10;
         }

       if(s==i)
	   	{
				flag=1;
				printf("\n%d",i);
	   	}
     }
   if(flag==0)
   printf("none\n");
return;
}

void armstrong(int x,int y)
{
   printf("\narmstrong number in the range %d to %d are:\n",x,y);
   int i,c,n,p,flag,s;
   flag=0;
	for(i=x;i<=y;i++)
   	{
       c=0,n=i;
       while(n!=0)
       	{
          n%10;
          c++;
          n=n/10;
        }
      s=0,n=i;
       while(n!=0)
       	{
          p=n%10;
          s=s+pow(p,c);
          n=n/10;
        }
       if(s==i)
       	{
         	flag=1;
       		printf("\n%d",i);
        }
    }
   if(flag==0)
   printf("none\n");
return;
}


void perfect(int x,int y)//a perfect number is the sum of it's factors
{
   printf("\nperfect number in the range %d to %d are:\n",x,y);
   int i,j,s,flag;
   flag=0;
	for(i=x;i<=y;i++)
   {
    s=0;
    	for(j=1;j<i;j++)
    		{
        		if(i%j == 0)
        		s=s+j;
    		}
    	if(s==i)
    		{
    			flag=1;
    			printf("\n%d",i);
    		}
   }

   if(flag==0)
   printf("none\n");
return;
}