//32,33 combined sum of upper and lower triangular matrix
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10];
int r,c,su=0,sl=0,i,j;
printf("enter row and column of the matrix\n");
scanf("%d %d",&r,&c);
printf("enter the matrix\n");
for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
		{
		if(i<j)
			{
         su=su+a[i][j];
         }
      else if(i>j)
			{
         sl=sl+a[i][j];
         }
      else
      	{
         su=su+a[i][j];
         sl=sl+a[i][j];
         }

		}

	}
printf("\n sum of upper triangular matrix %d",su);
printf("\n sum of lower triangular matrix %d",sl);
getch();
}