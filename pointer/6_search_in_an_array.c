//Pointer Search an element in an array
#include<stdio.h>
#include<conio.h>
int main()
{
int n,num,*q,i,a[20];
printf("enter lenth of the array ");
scanf("%d",&n);

printf("enter the array\n");
for(i=0;i<n;i++)
	{
   printf("enter a[%d] ",i);
   // q=&a[i];
   // scanf("%d",q);
   scanf("%d",&a[i]);
   }
printf("enter no. to search ");
scanf("%d",&num);

/*
// this is also right
q=a;
for(i=0;i<n;i++)
	{
   if(*q==num)
   	{
        printf("element found = %d\n",i+1);
        break;
      }
   q++;
   }
if(i==n)
printf("element not found ");
*/

int flag = 0;
i = 0;
q = a;
while (i!=n)
{
    if (*q == num)
    {
        flag = 1;
        break;
    }
    i++;
    q++;
}

if (flag==1)
    printf("element found = %d\n",i+1);
else
    printf("element not found",num);


return 1;
}
