//Pointers increment and decrement
#include<stdio.h>
#include<conio.h>
void main()
{
int x,*p;
x=90;
p=&x; //p = address of x


printf("%d ",p);

p++; //if p=1446, p++=1448
printf("%d ",p);

*p++; //gives garbage value
printf("%d ",p);//if *p=50,*p++=some garbage value

(*p)++; //*p gets priority
printf("%d ",*p); //*p = the value at p
                 //if *p=50,(*p)++=51
/*
understannd this:
int x=50,*p;
p=&x  address of x

and

*p=x value at address p

*/

int y[10]={15,25,36,89};
p=&y[0];
printf("%d\n",y[0]);
printf("%d\n",y[1]);
printf("%d\n",y[2]);
printf("%d\n",*p);
p++;// use *p++ and (*p)++ and check the results
printf("%d\n",*p);


getch();
}


