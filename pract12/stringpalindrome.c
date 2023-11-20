#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	gets(str);
	int i,len=strlen(str),j=len-1,count=0;
	for(i=0,j;i<len/2;i++,j--)
	{
		if(str[i]!=str[j])
		{
			count=1;
			break;
		}
        }
	if(count==1)
	{
		printf("it is not palindrome");
	}
	else
	{
		printf("it is palindrome");
	}
}

