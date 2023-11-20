#include<stdio.h>
#include<string.h>
void str_revpointer(char *str);

int main()
{
	char str[50];
	scanf("%s",str);
	str_revpointer(str);
}
void str_revpointer(char *str)
{
	char *startpointer=str;
	int len=strlen(str);
	char *endpointer=str+(len-1);
	int i;
	char temp;
	for(i=0;i<=len/2;i++)
	{
	  temp=*startpointer;
	 *startpointer=*endpointer;
	  *endpointer=temp;
	 *(startpointer++);
	 *(endpointer--);
	 }
	printf("%s",str);
}
	

