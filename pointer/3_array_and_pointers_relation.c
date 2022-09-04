#include <stdio.h>
int main() {
    int data[100];
    printf("%d\n",data); //starting address of data
    printf("Enter elements: ");
    printf("\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", data + i);
    printf("You entered: \n");
    for (int i = 0; i < 5; i++)
        printf("%d %d\n", *(data + i),(data + i));
    return 0;
}