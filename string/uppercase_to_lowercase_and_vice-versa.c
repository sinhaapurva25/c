// upperCase to lowerCase and vice-versa
#include<conio.h>
#include<stdio.h>
int main()
{
	printf("enter string a containing only alphabets ");
	char a[50];
	int i,len;
	//input string
	i=0;
	do
		{
		scanf("%c",&a[i]);
		i++;
		}while(a[i-1]!='\n');
	a[i]='\0';
	len=i-1;
	
	for(i=0;i<len;i++)
	 	{
			if (a[i] >= 65 && a[i] <= 90)
			// if((int(a[i])>=65) && (int(a[i])<=90))
				a[i]=a[i]+32;
			else if (a[i] >= 97 && a[i] <= 122)
			// else if((int(a[i])>=97) && (int(a[i])<=122))
				a[i]=a[i]-32;
		}
		printf("%s",a);
	// getch();
	return 1;
}