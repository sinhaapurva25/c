//reverse_an_array_without_creating_another_array
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,m,i,j,arr[100],k;
	printf("enter n ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&arr[i]);
	}

	if (n%2 == 0)
	{
		for(i=0;i<n/2;i++)
		{
			arr[i] = arr[i] ^ arr[n-1-i];
			arr[n-1-i] = arr[n-1-i] ^ arr[i];
			arr[i] = arr[i] ^ arr[n-1-i];
		}
	}
	else
	{
		for(i=0;i<n/2-1;i++)
		{
			arr[i] = arr[i] ^ arr[n-1-i];
			arr[n-1-i] = arr[n-1-i] ^ arr[i];
			arr[i] = arr[i] ^ arr[n-1-i];
		}
	}

	for(i=0;i<n;i++)
		{
			printf("%d ",arr[i]);
		}
	// getch();
	return 1;
}