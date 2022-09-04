#include<stdio.h>
#include<conio.h>

int main()
{
    int var, *ptr, arr[50];
    ptr = &var;
    printf("enter the length of the array ");
    scanf("%d",ptr);

    int i;
    printf("enter the array\n");
    for (i=0; i <*ptr; i++)
    {
        scanf("%d",arr+i);
    }
    
    int var2, *ptr2;
    ptr2 = &var2;
    printf("enter the element to find ");
    scanf("%d",ptr2);
    
    int foundElement = 0;
    for (i=0; i <*ptr; i++)
    {
        if (*(arr+i) == *ptr2)
        {
            printf("%d found at index %d", *ptr2, i);
            foundElement = 1;
            break;
        }
    }

    if (foundElement == 0)
    {
        printf("%d not found", *ptr2);
    }
    return 1;
}