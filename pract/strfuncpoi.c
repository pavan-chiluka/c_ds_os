#include<stdio.h>
#include<string.h>
void str_rev(char *str);
int main()
{
	char str[50];
	printf("enter a string");
	scanf("%s",str);
	void(*ptr)(char*)=&str_rev;
	ptr(str);
}
void str_rev(char *str)
{
	int len=strlen(str);
	int i,j=len-1;
	char temp;
	for(i=0,j;i<=j;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	printf("%s",str);
}

