/*
http://btechsmartclass.com/DS/U4_T4.html
*/
//insertion sort
#include<stdio.h>
#include<conio.h>
int main(void)
{
	int n,a[20],step,j,min;
	printf("enter n ");
	scanf("%d",&n);

	printf("enter the array:\n");
	for(step=0;step<n;step++)
		{
			scanf("%d",&a[step]);
		}
	for(step=1;step<n;step++)
		{
			min=a[step];
			j=step-1;

			while((min<a[j]) && (j>=0))
				{
					a[j+1]=a[j];
					j--;
					
					// int substep;
					// for(substep=0;substep<n;substep++)
					// {
					// 	printf("%d ",a[substep]);
					// }
				printf("\t");
				}
			a[j+1]=min;
			printf("\n");
		}

	printf("sorted array: ");
	for(step=0;step<n;step++)
		{
			printf("%d ",a[step]);
		}
	return 0;
}