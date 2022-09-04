//Pointer to pointer
#include<conio.h>
#include<stdio.h>
void main()
{
int x,*a,**b,***c;
x=10;
a=&x;b=&a;c=&b;

printf("%d\n",a);
printf("%d\n",&x);
printf("%d\n",*a);
printf("%d\n",&a);
printf("%d\n",b);
printf("%d\n",*b);
printf("%d\n",**b);
printf("%d\n",&b);
printf("%d\n",c);
printf("%d\n",*c);
printf("%d\n",***c);

getch();
}

