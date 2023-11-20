#include<stdio.h>
#include<string.h>
char* str_rev(char s1[],char s2[]);
int main()
{
	char s1[50];
	char s2[50];
	scanf("%s",s1);
	char *p;
	p=str_rev(s1,s2);
	printf("%s",p);
}
char* str_rev(char s1[],char s2[])
{
	int i,j;
	for(i=0;s1[i]!='\0';i++);
	for(i=i-1,j=0;i>=0;i--,j++)
	{
		s2[j]=s1[i];
	}
	s2[j]='\0';
	return s2;
}
