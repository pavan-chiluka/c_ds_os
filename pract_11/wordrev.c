#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	printf("enter a string");
	gets(str);
	int i=0,j,k,len=strlen(str);
	while(i<len)
	{
		j=i;
		while((str[j]!=' ')&&(str[j]!='\0'))
		{
			j++;
		}
		for(k=j-1;k>=i;k--)
		{
			printf("%c",str[k]);
		}
		printf(" ");
		if(str[j]=='\0')
		{
		break;
	        }
		i=j+1;
	}
}

