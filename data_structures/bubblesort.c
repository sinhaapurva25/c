/*
bubble sort
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(void)
{
	int n,i,j,a[20];

	printf("size of array? ");
	scanf("%d",&n);

	printf("enter the arrray:\n");
	for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}

	for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(a[j]>a[j+1])
				{
					a[j]=a[j]+a[j+1];
					a[j+1]=a[j]-a[j+1];
					a[j]=a[j]-a[j+1];
				}
			}

		}

	for(i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
	}


// getch();
   return 1;
}
