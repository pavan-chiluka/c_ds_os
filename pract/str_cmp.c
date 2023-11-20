#include<stdio.h>
#include<string.h>
int str_cmp(char s1[] ,char s2[]);
int main()
{
	char s1[50];
	char s2[50];
	printf("enter a strings");
	scanf("%s%s",s1,s2);
	int p;
        p=str_cmp(s1,s2);
	if(p==0)
	{
		printf("two strings are not same");
	}
	else
	{
		printf("strings are same");
	}
}
int str_cmp(char s1[],char s2[])
{
	int i;
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]!=s2[i])
		{
			return 0;
		}
	}
	return 1;
}


