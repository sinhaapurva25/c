#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a[100],c,j;
printf("enter n ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter a[%d] ",i);
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
if(a[i]!=NULL1)
{
              c=1;
             for(j=i+1;j<n;j++)
		{
		if(a[i]==a[j])
			{
			c++;
			a[j]=-1;
			}

		 }
	  if(c==1)
		{
		printf("%dth term %d is unique\n",i,a[i]);

	}

}
}
getch(); 
}