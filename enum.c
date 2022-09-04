//enum
#include<stdio.h>
#include<conio.h>

enum week{Mon=8, Tue, Wed, Thur, Fri, Sat, Sun};

enum year{Jan,Feb,Mar, Apr, May, Jun, Jul,
			 Aug, Sep, Oct, Nov, Dec};

enum State {Working = 1, Failed = 0, Freezed = 0};
void main()
{
	 enum week day;
	 day = Fri;
	 printf("%d\n",day);

	 enum year i;
	 for(i=Jan;i<=Dec;i++)
	 printf("%d\t",i);

	 printf("\n%d, %d, %d", Working, Failed, Freezed);
getch();
}