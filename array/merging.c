//merging
#include<stdio.h>
	 #include<conio.h>
	 void main()
	 {
		int n,m,i,j,x[100],y[100],k;
		printf("enter n ");
		scanf("%d",&n);
		printf("enter m ");
		scanf("%d",&m);
		int z[200];
		for(i=0;i<n;i++)
		{
			printf("enter x[%d]",i);
			scanf("%d",&x[i]);
		}


		for(j=0;j<m;j++)
		{
			printf("enter y[%d]",j);
			scanf("%d",&y[j]);
		}
		for(k=0;k<m;k++)
		{
			z[k]=x[k];

		}
		j=0;
		for(k=m;k<m+m;k++)
			{
			z[k]=y[j];
			j++;
			}

			printf("\nFinal list is : \n");
		for(k=0;k<m+n;k++)
			{
			printf("%d\t",z[k]);
			}


	 getch();
	 }