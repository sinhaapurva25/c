#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>

int main(){
    int *x;
    float *y;
    x = (int*)malloc(50); //50 contiguous bytes of memory are allocated and the address of the first byte is stored in x.
    x = (int*)malloc(5*sizeof(int));
    y = (float*)malloc(5*sizeof(float));
    
    printf("%d\n",x);
    printf("%d",y);
    return 1;
}