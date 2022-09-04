//36_transpose of matrix
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10];
int i,j,r,c;
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
printf("transpose of matrix\n");
for(i=0;i<c;i++)
	{
   for(j=0;j<r;j++)
   	{
      b[i][j]=a[j][i];
      }
   }
for(i=0;i<c;i++)
	{
	for(j=0;j<r;j++)
		{
		printf("%d\t",b[i][j]);
		}
   printf("\n");
	}
getch();
}