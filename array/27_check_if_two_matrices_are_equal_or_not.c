//27 check if two matrices are equal or not
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10][10], b[10][10];
	int i, j, ra, ca, rb, cb, k = 0;
	printf("enter row and column of array a\n");
	scanf("%d %d", &ra, &ca);
	printf("enter elements of array a\n");
	for (i = 0; i < ra; i++)
	{
		for (j = 0; j < ca; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("enter row and column of array b\n");
	scanf("%d %d", &rb, &cb);
	printf("enter elements of array b\n");
	for (i = 0; i < rb; i++)
	{
		for (j = 0; j < cb; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	for (i = 0; i < ra; i++)
	{
		for (j = 0; j < ca; j++)
		{
			if ((a[i][j]) != (b[i][j]))
			{
				printf("array is not equal");
				k = 1;
				break;
			}
		}
		if (k == 1)
			break;

	}
	if (k == 0)
		printf("array is equal");
	getch();
}