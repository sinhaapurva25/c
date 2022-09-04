//odd_even_separate
#include<stdio.h>
#include<conio.h>
	 void main()
	 {
		int n,m,i,j,a[100],even[100],odd[100],k;
		printf("enter n ");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("enter a[%d]",i);
			scanf("%d",&a[i]);
		}
		j=0,k=0;
		for(i=0;i<n;i++)
		{
			if((a[i]%2)==0)
				{
					even[j]=a[i];
					j++;
				}
				else
				{
					odd[k]=a[i];
				  k++;
				}
		}
		 printf("even array:\n");
		for(i=0;i<j;i++)
			{
			printf("%d\t",even[i]);
			}
		printf("\nodd array:\n");
		for(i=0;i<k;i++)
			{
			printf("%d\t",odd[i]);
			}


	 getch();
	 }