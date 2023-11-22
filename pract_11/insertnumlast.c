#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50];
	gets(s1);
	char s2[50];
	int i,j=0;
	for(i=0;s1[i]!='\0';i++)
	{
		if((s1[i]>='0')&&(s1[i]<='9'))
		{
			continue;
		}
		else
		{
			s2[j]=s1[i];
			j++;
		}
	}
	for(i=0;s1[i]!='\0';i++)
	{
		if((s1[i]>='0')&&(s1[i]<='9'))
		{
			s2[j]=s1[i];
			j++;
		}
	}
	s2[j]='\0';
printf("%s",s2);
}

