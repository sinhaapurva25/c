//Recursion_mul table range
#include<stdio.h>
#include<conio.h>

void mul(int,int,int);

int main()
{
	int n,r1,r2;
	printf("enter a no. ");
	scanf("%d",&n);
	printf("enter range\n");
	scanf("%d%d",&r1,&r2);
	mul(n,r1,r2);
	return 1;
}

void mul(int n,int r1,int r2)
{
	if(r1<=r2)
		{
		printf("%d*%d=%d\n",n,r1,n*r1);
		mul(n,r1+1,r2);
		}
	else
		return;

    // if (r1 > r2)
    //     return;
    // else
    // {
    //     printf("%d ", n*r1++);
    //     mul(n, r1, r2);
    // }
}