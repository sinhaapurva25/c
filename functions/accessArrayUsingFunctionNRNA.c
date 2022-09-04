#include<stdio.h>
#include<conio.h>
void accessArray();

int main()
{
   accessArray();
   // getch();
   return 1;
}

void accessArray()
{
int a[20][20],r,c,i,j;
printf("enter no. of rows ");
scanf("%d",&r);
printf("enter no. of columns ");
scanf("%d",&c);
printf("enter the elements of %d*%d array\n",r,c);
for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
         {
         scanf("%d",&a[i][j]);
         }
   }
printf("array:\n");
for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
         {
         printf("%d\t",a[i][j]);
         }
      printf("\n");
   }
}
