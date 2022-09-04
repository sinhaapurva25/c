//count the number of digits, alphabts and special characters in a string
#include<stdio.h>
#include<conio.h>
int main()
{

	char a[50];
	int i,digit,alphabet,specialCharacter;

	printf("enter a string\n");

	i=0;
   digit=0;
   alphabet=0;
   specialCharacter=0;
	do
	{
		scanf("%c",&a[i]);
      if (a[i]>=48 && a[i]<=57)
         digit++;
      else if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122))
         alphabet++;
      else if (a[i]=='\n')
         {}
      else
         specialCharacter++;
		i++;
	}while(a[i-1]!='\n');

	a[i-1]='\0';

   printf("total length of character=%d\n",i-1);
   printf("total number of digits=%d\n",digit);
   printf("total number of alphabet=%d\n",alphabet);
   printf("total number of specialCharacter=%d\n",specialCharacter);


// getch();
return 1;
}