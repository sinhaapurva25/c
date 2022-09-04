#include<stdio.h>
#include<conio.h>
int main()
{   
    printf("enter a string s ");
    char s[100];
    int i = 0;
    do
    {
        scanf("%c",&s[i]);
        i++;
    } while (s[i-1]!='\n');
    s[i-1] = '\0';
    
    printf("enter another string t ");
    char t[100];
    i = 0;
    do
    {
        scanf("%c",&t[i]);
        i++;
    } while (t[i-1]!='\n');
    t[i-1] = '\0';

    i = 0;
    int flag = 0;
    while (s[i]!='\n' | t[i!='\n'])
    {
        if (s[i]!=t[i])
            flag = 1;
            break;
        i++;
    }
    if (flag==1)
    {
        printf("unequal strings");
    }
    else
    {
        printf("equal strings");
    }
    return 1;
}