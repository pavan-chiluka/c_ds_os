#include<stdio.h>
#include<string.h>
char* str_str(char s1[],char s2[]);
int main()
{
	char s1[50];
	char s2[50];
	printf("enter a string");
	scanf("%s %s",s1,s2);
	char *p;
	p=str_str(s1,s2);
	printf("%s",p);

}
char* str_str(char s1[],char s2[])
{
	int i,j,k;
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]==s2[0])
		{
			for(k=i+1,j=1;s2[j]!='\0';k++,j++)
			{
				if(s1[k]!=s2[j])
				{
					break;
				}
			}
			if(s2[j]=='\0')
			{
				return s1+i;
			}
		}
	}
	return 0;
}
