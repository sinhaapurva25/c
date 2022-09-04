//Inserting_element_in_array
#include<stdio.h>
#include<conio.h>
int main()
{

int n,i,px,num, a[100],t,s;
printf("Enter the length of array ");
scanf("%d",&n);

	for(i=0;i<=n-1;i++)
	{
   	printf("enter a number ");
	   scanf("%d",&a[i]);
   }
   printf("\nYou have entered\n");
   for(i=0;i<n;i++)
	{
	   printf("%d\t",a[i]);
   }
   printf("\nEnter the position where you want to insert the new number ");
	scanf("%d",&px);
	printf("Enter the new number ");
	scanf("%d",&num);

   t= a[px-1];
   a[px-1]=num;

   for(i=px;i<=n;i++)
   {
   		s=a[i];
   		a[i]=t;
         t=s;
   }

    printf("\nfinal array after insertion: \n");
   for(i=0;i<=n;i++)
	{
	   printf("%d\t",a[i]);
   }


	// getch();
   return 1;
}