#include<stdio.h>
int sum(int p,int q);
int sub(int m,int n);
int main()
{
	int a,b,choice;
	printf("enter a,b value and choice");
	scanf("%d%d%d",&a,&b,&choice);
	int(*ptr[2])(int,int)={sum,sub};
          ptr[choice](a,b);
}
int sum(int p,int q)
{
	printf("%d",p+q);
}
int sub(int m,int n)
{
	printf("%d",m-n);
}
