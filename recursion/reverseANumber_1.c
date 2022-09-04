#include<stdio.h>
#include<conio.h>
#include<math.h>


int reverse(int);
int sum=0;
int main()
{
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    
    
    
    printf("reverse of %d is %d",x, reverse(x));
    // getch();
    return 1;
}

int reverse(int x)
{
    if(x==0)
        return sum;
    else
        sum=sum*10+(x%10);
        return reverse(x/10);
}