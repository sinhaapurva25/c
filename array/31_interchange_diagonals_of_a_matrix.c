//31_interchange diagonals of a matrix
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10];
int r,i,j;
printf("enter the size of square matrix ");
scanf("%d",&r);
printf("enter the elements of matrix\n");
 for(i=0;i<r;i++)
	{
	 for(j=0;j<r;j++)
		{
		 scanf("%d",&a[i][j]);
		}
	}
 if(r%2==0)
 {
 for(i=0;i<r;i++)
	{
	 for(j=0;j<r;j++)
		{
		 if(i==j)
			{
			 a[i][j]    = a[i][j]+ a[i][r-i-1];
			 a[i][r-i-1]= a[i][j]- a[i][r-i-1];
			 a[i][j]    = a[i][j]- a[i][r-i-1];
			}
		}
	}
 }
 else
 {
 	for(i=0;i<r;i++)
	{
	 for(j=0;j<r;j++)
		{
		 if((i==j)&&(i!=(r-1)/2)&&(j!=(r-1)/2))
			{
          		a[i][j]    = a[i][j]+ a[i][r-i-1];
			 	a[i][r-i-1]= a[i][j]- a[i][r-i-1];
			 	a[i][j]    = a[i][j]- a[i][r-i-1];
			}
		}
	}
 }


 printf("final array:\n");
 for(i=0;i<r;i++)
	{
	 for(j=0;j<r;j++)
		{
		 printf("%d\t",a[i][j]);
		}
	 printf("\n");
	}
getch();
}