//no of words in a string
#include<stdio.h>
#include<conio.h>
int main()
{

	char a[50];
	int i,word;

	printf("enter a string\n");

	i=0;
    word=0;

	do
	{
		scanf("%c",&a[i]);
        if ((a[i])==' ')
        	word++;
		i++;

	}while(a[i-1]!='\n');
	a[i-1]='\0';

   printf("total length of characters=%d\n",i-1);
   printf("total number of words=%d\n",word+1);
// getch();
return 1;
}