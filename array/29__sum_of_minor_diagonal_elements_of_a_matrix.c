//29 _sum of minor diagonal elements of a matrix
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10];
	int i, j, r, c, s = 0;
	printf("square array\n");
	printf("enter row and column of array\n");
	scanf("%d %d", &r, &c);
	printf("enter elements of array\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (i != j)
				s = s + a[i][j];
		}
	}
	printf("sum of minor diagnol elements of array %d", s);


	getch();
}

