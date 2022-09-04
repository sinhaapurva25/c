//reverse_of_an_array
#include<stdio.h>
#include<conio.h>
	 void main()
	 {
		int n,m,i,j,a[100],b[100],k;
		printf("enter n ");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("enter a[%d]",i);
			scanf("%d",&a[i]);
		}

		i=0;
		for(j=n-1;j>=0;j--)
		{
			b[j]=a[i];
			i++;
		}

		for(k=0;k<n;k++)
			{
			printf("%d\t",b[k]);
			}


	 getch();
	 }