#include<stdio.h>
int value(int a,int b);
int main()
{
	int n1,n2;
	scanf("%d %d",&n1,&n2);
	printf("%d %d",n1,n2);
	printf("\n");
	value(n1,n2);
	printf("%d %d",n1,n2);
}
int value(int a,int b)
{
	a++;
	b++;
	printf("%d %d\n",a,b);
}
