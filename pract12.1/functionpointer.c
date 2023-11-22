#include<stdio.h>
int sum(int p,int q);
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int(*ptr)(int,int)=sum;
	ptr(a,b);
}
int sum(int p,int q)
{
	printf("%d",p+q);
}
