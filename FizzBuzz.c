//div_by_3_5
#include<stdio.h>
#include<conio.h>
void main()
{
int i;
for(i=1;i<=100;i++)
	{
    if(i%3==0)
    	{
       if(i%5==0)
       printf("3 & 5\n");
       else
       printf("only 3\n");
      }
    else if(i%5==0)
    	{
       if(i%3==0)
       printf("3 & 5\n");
       else
       printf("only 5\n");
      }
    else
     printf("neither\n");

   }
getch();
}
