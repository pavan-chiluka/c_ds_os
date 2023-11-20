#include<stdio.h>
int value(int p,int q);
int main()
{
	int a=5,b=5;
	printf("%d %d",a,b);
        value(a,b);
	printf("%d %d",a,b);
}
int value(int p,int q)
{
	p++;
	q++;
	printf("%d %d",p,q);
}
