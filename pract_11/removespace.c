#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50],s2[50];
	printf("%s",s1);
	gets(s1);
	int i,j=0;
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]==' ')
		{
			continue;
		}
		else
		{
			s2[j]=s1[i];
			j++;
		}
	}
	s2[j]='\0';
	printf("%s",s2);
}

