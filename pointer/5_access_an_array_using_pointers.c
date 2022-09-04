

#include<stdio.h>
#include<conio.h>

int main()
{
    int var, *ptr, i, a[50];
    ptr = &var;
    printf("enter var ");
    scanf("%d",ptr);
    printf("%d",*ptr);
    
    printf("\n");

    for (i= 0; i < *ptr; i++)
    {
        printf("enter element ");
        scanf("%d",(a+i));
    }

    for (i= 0; i < *ptr; i++)
    {
        printf("%d\n",*(a+i));
    }
    return 1;
}