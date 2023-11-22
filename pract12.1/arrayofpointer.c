#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter values a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	int i,*ptr[3];
	ptr[0]=&a;
	ptr[1]=&b;
	ptr[2]=&c;
	for(i=0;i<=2;i++)
	{
		printf("%d",*ptr[i]);
	}
}


