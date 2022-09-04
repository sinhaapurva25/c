//array_ascending
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,min,a[100],b[100],t;
	printf("enter n ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	//min=a[0];
	for(i=0;i<n;i++)
		{
			for(j=0;j<n-1-i;j++)
			{
				if(a[j]>a[j+1])
				{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				}
			}

		}
	for(i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
	getch();/*not needed*/
	return 1;
}