/*
http://btechsmartclass.com/DS/U4_T4.html
*/
//insertion sort
#include<stdio.h>
#include<conio.h>
int main(void)
{
int n,a[20],i,j,min;
printf("enter n ");
scanf("%d",&n);

   printf("enter the array:\n");
for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}

for(i=0;i<n;i++)
	{
    	min=a[i];
      j=i-1;
      while((min<a[j]) && (j>=0))
      	{
         	a[j+1]=a[j];
            j--;
         }
   	a[j+1]=min;
	}

   printf("sorted array: ");
for(i=0;i<n;i++)
	{
	printf("%d ",a[i]);
	}

// getch();
   return 1;
}