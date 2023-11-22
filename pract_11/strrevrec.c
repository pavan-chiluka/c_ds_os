#include<stdio.h>
#include<string.h>
void str_rev(char *str);
int main()
{
	char s1[50];
	printf("enter a string");
	scanf("%s",s1);
	str_rev(s1);
}
void str_rev(char *str)
{
	if(*str)
	{
		str_rev(str+1);
		printf("%c",*str);
	}
}
