#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10][10];
    int r, c, i, j;
    printf("enter number of rows");
    scanf("%d",&r);
    printf("enter number of columms");
    scanf("%d",&c);
    for (i=0; i<r; i++)
    {
        for (j=0; j< c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0; i<r; i++)
    {
        for (j=0; j< c; j++)
        {
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }
    for (j=0; j<c; j++)
    {
        int sum = 0;
        for (i=0; i<r; i++)
        {
            printf("%d ",a[i][j]);
            sum = sum + a[i][j];
        }
        printf(" = %d ",sum);
    }
    return 1;
}