//sum of diagnol elements
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10];
int i,j,r,c;
printf("square array\n");
printf("enter row and column of array\n");
scanf("%d %d",&r,&c);
printf("enter elements of array a\n");
 for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
printf("enter elements of array b\n");
 for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
		{
		scanf("%d",&b[i][j]);
		}
	}
 for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
		{
			if(i==j)
			a[i][j]=a[i][j]+b[i][j];
			else
			a[i][j]=0;
		}
	}
 printf("final array\n");
 for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
		{
		printf("%d\t",a[i][j]);
		}
	printf("\n");
	}

getch();
}