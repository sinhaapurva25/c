/*
1
2 3
4 5 6
7 8 9 10
*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int k = 4;
    int c = 0;
    int i, j;
    for(i=0; i<k; i++)
    {
        for (j=0; j<i+1 ; j++)
        {
            c++;
            printf("%d ",c);
        }
    printf("\n");
    }
    return 0;
}