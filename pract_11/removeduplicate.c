#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50];
	scanf("%s",s1);
	int len=strlen(s1);
        int i,j,k;
	for(i=0;s1[i]!='\0';i++)
	{
		for(j=i+1;s1[j]!='\0';j++)
		{
			if(s1[i]==s1[j])
			{

			 for(k=j;s1[k]!='\0';k++)
			 {
				 s1[k]=s1[k+1];
			 }
			 len--;
			 j--;
			}
		}
	}
	printf("%s",s1);
}
