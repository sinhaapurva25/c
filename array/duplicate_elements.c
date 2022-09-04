//duplicate elements
#include<stdio.h>
#include<conio.h>
int main()
	{
	int n,i,a[100],c,j,k=0;
	printf("enter n ");
	scanf("%d",&n);
	printf("enter each element of the 1D array\n");
	for(i=0;i<n;i++)
		{
		printf("enter a[%d] ",i);
		scanf("%d",&a[i]);
		}

	for(i=0;i<n;i++)
	{
		if(a[i]!=-1)
		{
			c=1;
			for(j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					c++;
					a[j]=-1;
				}

			}
			if(c>1)
				k++;
	}

	}

		printf("total number of duplicate elements is %d\n",k);
	// getch();
	return 1;
	}