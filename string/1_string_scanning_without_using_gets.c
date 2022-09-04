//string scanning without using gets()
#include<stdio.h>
#include<conio.h>
void main()
{

char a[50];
int i=0;
do
{
scanf("%c",&a[i]);
i++;
}
while(a[i-1]!='\n');
a[i-1]='\0';
printf("%s",a);
getch();
}