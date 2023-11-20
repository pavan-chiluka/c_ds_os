#include<stdio.h>
#include<string.h>
int main()
{
	int count=0;
	char s1[50],ch;
	gets(s1);
	scanf("%c",&ch);
	int i;
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]==ch)
		{
			count++;
		}
	}
	printf("%d",count);
}
