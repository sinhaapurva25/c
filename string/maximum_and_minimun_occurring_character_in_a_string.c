//maximum&minimun occurring character in a string
// not sure what this function was written for
#include<stdio.h>
#include<conio.h>
int main()
{
   char a[50],t;
   int i,len,j,c,max,min,flag;
   printf("enter a string ");
   i=0;
   do
      {
      scanf("%c",&a[i]);
      i++;
      }while(a[i-1]!='\n');
   a[i-1]='\0';
   len=i-1;
   //printf("%d",len);

   //maximum
   max=0;
   for(i=0;i<len-i;i++)
      {
      c=1;
      for(j=i+1;j<len-1;j++)
         {
         if(a[i]==a[j])
         c++;
         }
      if((c>max)&&(c!=max))
         {
            max=c;
            t=a[i];
            flag=1;
         }
      if(c==max)
         {
            flag=0;
         }
      }


   if(flag==1)
      printf("frequency of max character %c = %d\n",t,max);
   else
   {
      printf("no character occurs max times or ");
      printf("more than two characters have the same max freq.\n");
   }
return 1;
}