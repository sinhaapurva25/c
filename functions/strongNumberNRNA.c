//strong_number_NRNA
#include<stdio.h>
#include<conio.h>
void sumOfDigits();
int main()
{
	sumOfDigits();

	// getch();
    return 1;
}

void sumOfDigits()
{
int n,m,s,p,k,i;
printf("enter a number ");
scanf("%d",&n);
m=n,s=0;

	while(m!=0)
	{
		p=1;
		k=m%10;
			for(i=1;i<=k;i++)
			p=p*i;
		s=s+p;
		m=m/10;
	}

	if(s==n)
	printf("krishnamurthy number");
	else
	printf("not krishnamurthy number");
}