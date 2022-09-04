#include<stdio.h>
#include<conio.h>
int add();

int main()
{
int sum=add();

printf("%d",sum);
// getch();
   return 1;
}

int add()
{
int x,y,sum;
printf("enter two numbers\n");
scanf("%d %d",&x,&y);
printf("%d + %d = ",x,y);
return x+y;
}