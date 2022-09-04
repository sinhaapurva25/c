/*
Structure intro
*/
#include<stdio.h>
#include<conio.h>
void getval(int[],int);
void print(int[],int);

void main()
{
	struct student
		{
			char name[30];
			int p,c,m;
			float t,av;
		};
	struct student st;

			st.p=10;
			st.c=20;
			st.m=30;
			st.t=(st.p+st.c+st.m);
			st.av=st.t/3;
			printf("physics= %d\n",st.p);
			printf("chemistry= %d\n",st.c);
			printf("maths= %d\n",st.m);
			printf("total= %f\n",st.t);
			printf("average= %f\n",st.av);



	getch();
}



