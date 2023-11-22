#include<stdio.h>
int refer(int *p,int *q);
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d %d\n",a,b);
	refer(&a,&b);
	printf("%d %d\n",a,b);
}
int refer(int *p,int *q)
{
	(*p)++;
	(*q)++;
	printf("%d %d\n",*p,*q);
}
