//palindrome string
#include<stdio.h>
#include<conio.h>
int main()
{

	char a[50],b[50];
	int i,j,len,flag;

	printf("enter a string\n");

	i=0;

	do
	{
		scanf("%c",&a[i]);
		i++;
	}while(a[i-1]!='\n');
 	a[i-1]='\0';
 	
	len=i-1;
	//reversing the string
	for(j=0;j<len;j++)
		{
		b[j]=a[i-2];
		/*
		if you need to print the reverse array
		printf("%c",b[j]);
		*/
		i--;
	}

	flag=0;
	for(i=0;i<len;i++)
		{
		if(a[i]!=b[i])
			flag=-1;
		break;
		}

	if(flag==-1)
	printf("not palindrome");
	else
	printf("palindrome");
	// getch();
	return 1;
}