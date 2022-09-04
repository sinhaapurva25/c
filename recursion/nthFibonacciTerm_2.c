/*
nth fibonacci term
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

// function to get the nth fibonacci term
void nth_fibo(int, int, int, int);

// function to get the first n fibonacci terms
void n_fibos(int, int, int, int);

int main()
{
	int i, n, b, a;
	i = 0;
	a = -1;
	b = 1;
	printf("enter end range ");
	scanf("%d",&n);
	nth_fibo(i,n,a, b);
	return 1;
}

void nth_fibo(int i, int n, int a, int b)
{
	if (i<n)
		{
			nth_fibo(i+1, n, b, a+b);
		}
	else
		printf("%d", a+b);
}

void n_fibos(int i, int n, int a, int b)
{
	if (i<n)
		{
			printf("%d\n", a+b);
			n_fibos(i+1, n, b, a+b);
		}
}