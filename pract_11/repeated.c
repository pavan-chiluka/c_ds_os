#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50];
	scanf("%s",s1);
	int i,j;
	for(i=0;s1[i]!='\0';i++)
	{
		for(j=i+1;s1[j]!='\0';j++)
		{
			if(s1[i]==s1[j])
			{
				printf("%c",s1[i]);
			}
		}
	}

}

