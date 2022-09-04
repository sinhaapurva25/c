//37 determinant of a matrix
#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10];
int r,i,j;
printf("enter size r of a square matrix ");
scanf("%d",&r);
printf("enter the elements of the matrix\n");
for(i=0;i<r;i++)
	{
   	for(j=0;j<r;j++)
   		{
   			scanf("%d",&a[i][j]);
      	}
   }
printf("%d",a);

getch();
}

