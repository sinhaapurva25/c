//array of structure
#include<stdio.h>
struct Date
{
		int d,m,y;
};

struct STU
{
	int p,c,m;
	float t,a;
	struct Date dob;
	struct Date doj;
};

void main()
{
	int i,n;
	struct STU st[20];
	printf("enter n ");
	scanf("%d",&n);


	for(i=0;i<n;i++)
	{
	 printf("enter marks in p,c,m,dob,doj\n");
	 scanf("%d%d%d",&st[i].p,&st[i].c,&st[i].m);
	 scanf("%d",&st[i].dob.d);
	 scanf("%d",&st[i].dob.m);
	 scanf("%d",&st[i].dob.y);
	 scanf("%d",&st[i].doj.d);
	 scanf("%d",&st[i].doj.m);
	 scanf("%d",&st[i].doj.y);
	}
for(i=0;i<n;i++)
	{
		st[i].t=st[i].p+st[i].c+st[i].m;
		st[i].a=st[i].t/3;
	 printf("total=%f \t average=%f \n",st[i].t,st[i].a);
	 printf("Date of birth: %d-",st[i].dob.d);
	 printf("%d-",st[i].dob.m);
	 printf("%d\t",st[i].dob.y);
	 printf("Date of joining: %d-",st[i].doj.d);
	 printf("%d-",st[i].doj.m);
	 printf("%d\n",st[i].doj.y);
	}

}

