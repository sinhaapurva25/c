//40_symmetric matrix
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10];
int i,j,r,c,k=0;
printf("enter row and column of array \n");
scanf("%d %d",&r,&c);
printf("enter elements of array \n");
for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
/*transpose of matrix*/
for(i=0;i<c;i++)
	{
   for(j=0;j<r;j++)
   	{
      b[i][j]=a[j][i];
      }
   }
for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
		if((a[i][j])!=(b[i][j]))
		{
			printf("array is not symmetric");
			k=1;
			break;
		}
	}
	 if(k==1)
	 break;

	}
if(k==0)
printf("array is symmetric");
getch();
}