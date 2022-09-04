//39_sparse matrix
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10];
int i,j,r,m=0,n=0;
printf("enter size of square matrix\n");
scanf("%d",&r);
printf("enter elements of array\n");
 for(i=0;i<r;i++)
	{
	for(j=0;j<r;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}

 for(i=0;i<r;i++)
	{
	for(j=0;j<r;j++)
		{
      	if(i==j)
         	{
            	if(a[i][j]==1)
               	m++;
            }
         else
         	{
            	if(a[i][j]==0)
               	n++;
            }
		}
	}
if(m<n)
printf("sparse matrix");
else
printf("not sparse matrix");

getch();
}