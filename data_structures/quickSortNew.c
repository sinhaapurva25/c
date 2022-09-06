/*Logic
https://www.google.com/amp/s/www.geeksforgeeks.org/quick-sort/amp/
*/

/*Source code
https://www.studytonight.com/data-structures/quick-sort
*/

// simple C program for Quick Sort
#include <stdio.h>
int partition(int a[], int beg, int end);  
void quickSort(int a[], int beg, int end);  
void main()  
{  
    int i;  
    int arr[10]={90,23,101,45,65,28,67,89,34,29};  
    
    // call quickSort function
    quickSort(arr, 0, 9);

    printf("\n The sorted array is: \n");  
    for(i=0;i<10;i++)  
        printf(" %d\t", arr[i]);
    return 0;
}





void quickSort(int a[], int beg, int end)  
{  
    if(beg<end)  
    {  
        int loc;
        loc = partition(a, beg, end);
        quickSort(a, beg, loc-1);  
        quickSort(a, loc+1, end);  
    }  
}

int partition(int a[], int beg, int end)  
{  
    int left, right, temp, loc, flag;     
    loc = left = beg;  
    right = end;  
    flag = 0;  
    while(flag != 1)  
    {  
        while((a[loc] <= a[right]) && (loc!=right))  
        right--;  
        if(loc==right)  
        flag =1;  
        else if(a[loc]>a[right])  
        {  
            temp = a[loc];  
            a[loc] = a[right];  
            a[right] = temp;  
            loc = right;  
        }  
        if(flag!=1)  
        {  
            while((a[loc] >= a[left]) && (loc!=left))  
            left++;  
            if(loc==left)  
            flag =1;  
            else if(a[loc] < a[left])  
            {  
                temp = a[loc];  
                a[loc] = a[left];  
                a[left] = temp;  
                loc = left;  
            }  
        }  
    }  
    return loc;  
}