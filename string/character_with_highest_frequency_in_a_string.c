#include<stdio.h>
#include<conio.h>
int main()
{   
    // works for only lowercase letters
    printf("enter a string");
    char s[100];
    int i = 0;
    do
    {
        scanf("%c",&s[i]);
        i++;
    } while (s[i-1]!='\n');
    s[i-1] = '\0';
    // printf("%s",s);

    i = 0;
    int freq[26]={};
    while (s[i]!='\0')
    {
        freq[s[i]-97]++;
        i++;
    }

    printf("\n");
    
    for (i=0; i<26; i++)
    {
        if (freq[i]>0)
            printf("%c occurs %d times\n",i+97,freq[i]);
    }
    return 1;
}