// To store the address of a variable 'x' in another variable 'p', the another variable has to be written as:
// *p = &x;

#include<stdio.h>
#include<conio.h>
int main()
{
int x,*p;
x=90;
p=&x;
printf("%d\n",p);//address of x
printf("%d\n",*p);//value of x
printf("%d\n",&p);//adress of ptr

//addition
int a,b,*m,*n;
m=&a;//value at address of a
n=&b;//value at address of b
// int a, b;
// int *m = &a;
// int *n = &b;
printf("\nenter two numbers\n");
scanf("%d",m);
scanf("%d",n);
printf("sum= %d\n",*m+*n);//sum of a and b

//swapping
printf("\nBefore swapping:\n");
printf("x=%d\ty=%d",*m,*n);
*m=*m+*n;
*n=*m-*n;
*m=*m-*n;
printf("\nAfter swappig:\n");
printf("x=%d\ty=%d",*m,*n);

// getch();
return 1;
}