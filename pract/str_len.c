#include<stdio.h>
#include<string.h>
int str_len(char s1[]);
int main()
{
	char s1[50];
	printf("enter a string");
	scanf("%s",s1);
	int p;
	p=str_len(s1);
	printf("%d",p);
}
int str_len(char s1[])
{
	int i;
	for(i=0;s1[i]!='\0';i++);
	return i;
}


       


