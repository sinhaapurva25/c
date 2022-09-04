#include<stdio.h>
#include<conio.h>
#include<math.h>

int noOfDigits(int);
int reverse(int, int);

int main()
{
    int x;
    printf("enter a number ");
    scanf("%d",&x);

    printf("noOfDigits = %d\n",noOfDigits(x));

    printf("reverse of %d is %d",x, reverse(x, noOfDigits(x)-1));

    return 1;
}

int reverse(int x, int n)
{
    if (x>0)
        {
            return (x%10)*pow(10,n--)+reverse(x/10,n);
        }
    return 0;
        
}

int noOfDigits(int x)
{
    if (x>0)
        return 1+noOfDigits(x/10);
    return 0;
}