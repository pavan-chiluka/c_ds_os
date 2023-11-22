#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50],s2[50];
	scanf("%s %s",s1,s2);
	char *result=strstr(s1,s2);
	int pos;
	if(result!=0)
	{
		pos=result-s1;
		printf("%d",pos);
	}
	else
	{
		printf("no substring");
	}

}
