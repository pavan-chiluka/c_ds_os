#include<stdio.h>
void sum(int a,int b)
{
	printf("%d\n",a+b);
}
void sub(int m,int n)
{
	printf("%d",m-n);
}
void display (void(*ptr)(int,int))
{
	ptr(5,5);
}
int main()
{
	display(sum);
	display(sub);
}
