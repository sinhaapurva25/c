//reverse_of_a_string
#include<stdio.h>
#include<conio.h>
void main()
{
printf("ENTER A STRING:\t");
char a[50];
int i=0,j;
do
{
scanf("%c",&a[i]);
i++;
}
while(a[i-1]!='\n');
a[i-1]='\0';
//length of string
//printf("%d",i-1);

printf("REVERSE OF THE STRING:\t");
for(j=i-2;j>=0;j--)
	{
	printf("%c",a[j]);
	}

getch();
}


/*this logic is also right
#include<stdio.h>
#include<conio.h>
void main()
{

	char a[50],b[50];
	int i,j,len;

	printf("enter a string\n");

	i=0;


	do
	{
		scanf("%c",&a[i]);

		i++;

	}while(a[i-1]!='\n');
 a[i-1]='\0';
 len=i-1;

 for(j=0;j<len;j++)
 	{
   	b[j]=a[i-2];
      printf("%c",b[j]);
      i--;
   }
getch();
}


*/