//copy one string into another
#include<stdio.h>
#include<conio.h>
int main()
{
   printf("enter string a: ");
   char a[50],b[50];
   int i;
   //copying a[] into b[]
   i=0;
   do
      {
      scanf("%c",&a[i]);
      b[i]=a[i];
      i++;
      }while(a[i-1]!='\n');
   a[i]='\0';



   i=0;
   printf("string b: ");
   //printing b[]
   do
      {
      printf("%c",b[i]);
      i++;
      }while(b[i-1]!='\n');
   b[i]='\0';
   // getch();
   return 1;
}