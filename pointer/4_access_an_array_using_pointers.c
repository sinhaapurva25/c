/*
Access an array using pointers
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int n,*m,*q,i,a[20];
printf("enter lenth of the array");
m=&n;

scanf("%d",m);

for(i=0;i<*m;i++)
	{
   q=&a[i];
   scanf("%d",q);
   }
for(i=0;i<*m;i++)
	{
   q=&a[i];
   printf("%d\n",*q);
   }


getch();
}