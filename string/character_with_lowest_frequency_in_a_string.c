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
  s[i-1] = '\0';
  int len = i - 1;

  // int min=len;
  // int max = 0;
  // int c, j;
  // int flag = 0;
  // char t;
  // for(i=0;i<len-i;i++)
  //   {
  //     c=1;
  //     for(j=i+1;j<len-1;j++)
  //     {
  //       if(s[i]==s[j])
  //       {
  //         s[j]=' ';
  //         c++;
  //       }
  //     }
  //     if((c<min)&&(c!=max))
  //     {
  //       min=c;
  //       t=s[i];
  //       flag=1;
  //     }
  //     if(c==min)
  //     {
  //       flag=0;
  //     }
  //   }


  // if (flag==1)
  //   printf("frequency of min character %c = %d",t,min);
  // else
  // {
  //   printf("no character occurs min times or ");
  //   printf("more than two characters have the same min freq.\n");
  // }
  
  int min = i-1;
  i = 0;
  int freq[26]={};
  while (s[i]!='\0')
  {
    freq[s[i]-97]++;
    i++;
  }
  
  char min_ch = 'a';
  for (i=0;i<26;i++)
  {
    if (freq[i]>0 & freq[i]<min)
      {
        min = freq[i];
        min_ch = i+97;
      // printf("%c occurs %d times\n",i+97,freq[i]);
      }
  }
  
  // getch();
  printf("%c occurs %d times\n",min_ch,min);
  return 1;
}