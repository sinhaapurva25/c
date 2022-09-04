#include<stdio.h>
#include<conio.h>
int sum(int);

int main()
{
int n;
printf("enter a no. ");
scanf("%d",&n);
printf("sum = %d",sum(n));
// getch();
return 1;
}

int sum(int d)
{
if(d<=0)
return 0;
/*
if(d<=1)
return 1;
*/
else
return d+sum(d-1);
}