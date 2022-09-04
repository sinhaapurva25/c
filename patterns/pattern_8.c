/*
1
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
*/
#include <stdio.h>
#include<conio.h>
int main()
{
    int k = 5;
    int i, j;
    for (i=1; i<=k; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("%d ",j);
        }
        for (j=i-1; j>0; j--)
        {
            printf("%d ",j);
        }
    printf("\n");
    }
    return 1;
}