// use of exit and break

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choice;
	while(1)
	{
		printf("\n4 to exit\n");
		scanf("%d",&choice);
		if(choice==4)
		{
			//break; // out of the loop
			//The exit(0) function determines the program terminates without any error message, and then the exit(1) function determines the program forcefully terminates the execution process.
			exit(0); //out of the program
		}
	}

	printf("\n Terminated");
}

