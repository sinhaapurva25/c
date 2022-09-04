//merge two strings (with space in bw)
#include<stdio.h>
#include<conio.h>
int main()
{

	char a[20], b[20], c[50];
	int i,len1,len2,k;
	printf("enter first string\n");

	i=0;
	do
	{
		scanf("%c",&a[i]);
		i++;
	}while(a[i-1]!='\n');
	a[i-1]='\0';
	len1=i-1;

	printf("enter second string\n");
	i=0;
	do
	{
		scanf("%c",&b[i]);
		i++;
	}while(b[i-1]!='\n');
	b[i-1]='\0';
	len2=i-1;

	for(i=0;i<len1;i++)
		c[i]=a[i];
	c[i]=' ';

	k=0;
	for(i=len1+1;i<=len1+len2+1;i++)
	{
		c[i]=b[k];
		k++;
	}
	
	printf("%s",c);
	
// getch();
return 1;
}