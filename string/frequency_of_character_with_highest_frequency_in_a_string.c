#include<stdio.h>
#include<conio.h>
int main()
{   
    // works for only lowercase letters
    printf("enter a string ");
    char s[100];
    int i = 0;
    do
    {
        scanf("%c",&s[i]);
        i++;
    } while (s[i-1]!='\n');
    s[i-1]='\0';
    
    int max = 0;
    int frq[26] = {};
    i = 0;
    while (s[i]!='\0')
    {
        frq[s[i]-97]++;
        if (frq[s[i]-97] > max)
        {
            max = frq[s[i]-97];
        }
        i++;
    }
    
    printf("%d",max);
    return 1;
}