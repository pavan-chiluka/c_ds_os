#include<stdio.h>
int func1(int *p);
int func2(int **q);
int func3(int ***r);
int main()
{
	int n=5;
	func1(&n);
}
int func1(int *p)
{
	printf("%d",*p);
	func2(&p);
}
int func2(int **q)
{
	printf("%d",**q);
	func3(&q);
}
int func3(int ***r)
{
	printf("%d",***r);
}

