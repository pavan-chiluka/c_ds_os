#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	gets(str);
	int pos;
	scanf("%d",&pos);
	int i,len=strlen(str);
	for(i=pos+1;i<len;i++)
	{
		str[i-1]=str[i];
	}
	len--;
       //str[i]='\0';
	printf("%s",str);
}

