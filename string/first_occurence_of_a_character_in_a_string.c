//first occurence of a character in a string
#include<stdio.h>
#include<conio.h>
int main()
{

char a[50],c;
int i,flag,k;

printf("enter a string ");
gets(a);

printf("enter a character ");
scanf("%c",&c);

i=0;
flag=0;
	while(a[i]!='\0')
		{
       if(a[i]==c)
       {
       k=i;
       flag=1;
       break;
       }
       i++;
      }
if(flag==1)
 printf("character %c occurs at %d",c,k+1);
else
 printf("character %c doesn't occur",c);

// getch();
return 1;
}