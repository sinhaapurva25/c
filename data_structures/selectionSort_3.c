//selection sort
#include<stdio.h>
int main()
{
int n,a[20],i,j,min;
printf("enter n ");
scanf("%d",&n);

   printf("enter the array:\n");
for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}

for(i=0;i<n;i++)
	{
    	for(j=i+1;j<n;j++)
    	{   
    	    if(a[i]>a[j])
    	    {
    	        a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
    	    }
    	}
}

   printf("sorted array: ");
for(i=0;i<n;i++)
	{
	printf("%d ",a[i]);
	}
}