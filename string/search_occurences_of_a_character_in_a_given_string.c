//search occurences of a character in a given string
#include<stdio.h>
#include<conio.h>
int main()
{
   char a[50],c;
   int i,j,b[50],flag;
   printf("enter a string ");
   gets(a);
   printf("enter a character ");
   scanf("%c",&c);
   flag=0,i=0,j=0;
   while(a[i]!='\0')
   {
   if(a[i]==c)
      {
      flag=1;
      b[j]=i;
      j++;
      }
   i++;
   }

   if(flag==1)
   {
      printf("chacacter %c occurs at the following positions:\n",c);
      for(i=0;i<j;i++)
         printf("%d ",b[i]+1);
   }

   else
   printf("character %c doesn't occur",c);

// getch();
return 1;
}

 