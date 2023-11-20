#include<stdio.h>
#include<string.h>
char* str_cat(char s1[],char s2[]);
int main()
{
	char s1[50];
	char s2[50];
	scanf("%s %s",s1,s2);
	char *p;
	p=str_cat(s1,s2);
	printf("%s",s1);
}
char* str_cat(char s1[],char s2[])
{
int i,j;
for(i=0;s1[i]!='\0';i++);
for(i,j=0;s2[j]!='\0';i++,j++)
{
	s1[i]=s2[j];
}
return s1;
}

