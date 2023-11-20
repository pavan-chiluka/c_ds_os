#include<stdio.h>
#include<string.h>
int main()
{
	char str1[50],str2[50];
	gets(str1);
	gets(str2);
	int i,j,n1=strlen(str1),n2=strlen(str2);
	char temp;
	if(n1!=n2)
	{
		printf("it is not anagram");
	}
	if(n1==n2)
	{
	for(i=0;i<n1-1;i++)
	{
		for(j=i+1;j<n1;j++)
		{
			if(str1[i]>str1[j])
			{
				temp=str1[i];
				str1[i]=str1[j];
				str1[j]=temp;
			}
			if(str2[i]>str2[j])
			{
				temp=str2[i];
				str2[i]=str2[j];
				str2[j]=temp;
			}
		}
	}
	}
	for(i=0;i<n1;i++)
	{
		if(str1[i]!=str2[i])
		{
			printf("strings are not anagram");
			break;
		}
	}
	if(str1[i]=='\0')
	{
		printf("strings are anagram");
	}
}



