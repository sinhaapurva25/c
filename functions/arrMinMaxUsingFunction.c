//array_min_max_using_function
#include<stdio.h>
#include<conio.h>
#include<math.h>

void sumOfArray();

int main()
{
	sumOfArray();
// getch();
   return 1;
}

void sumOfArray()
{
 int n,a[20],i,min,max,t;
 printf("enter the length of array ");
 scanf("%d",&n);
 printf("enter the array elements\n");
 for(i=0;i<n;i++)
   {
   	scanf("%d",&a[i]);
   }
 min=a[0];
 for(i=0;i<n;i++)
	{
	 if(a[i]<min)
      	{
         t=min;
         min=a[i];
         a[i]=t;
        }
    }
 printf("minimun=%d",min);

 max=a[0];
 for(i=0;i<n;i++)
	{
	 if(a[i]>max)
      	{
         t=max;
         max=a[i];
         a[i]=t;
        }
    }
 printf("\nmaximum=%d",max);

}

