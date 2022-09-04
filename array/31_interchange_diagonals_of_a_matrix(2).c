#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10][10];
    int r, i, j;
    printf("enter number of rows");
    scanf("%d",&r);
    printf("enter the elemnts of the array\n");
    for (i=0; i<r; i++)
    {
        for (j=0; j< r; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("this is the input array\n");
    for (i=0; i<r; i++)
    {
        for (j=0; j< r; j++)
        {
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }
    int p =  r-1;
    for (i=0; i<r; i++)
    {
        if (r%2!=1 & i!=r/2+1)
        {
            // printf("a[i][i]=%d, a[i][p]=%d\n",a[i][i],a[i][p]);
            a[i][i] = a[i][i]^a[i][p];
            a[i][p] = a[i][p]^a[i][i];
            a[i][i] = a[i][i]^a[i][p];
        }
        p--;
    }
    printf("\nthis is diagnols inversed array\n");
    for (i=0; i<r; i++)
    {
        for (j=0; j< r; j++)
        {
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }
    printf("%d",3/2);
    return 1;
}