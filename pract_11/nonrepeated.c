#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char s1[50];
scanf("%s",s1);
int i,j,count;
for(i=0;s1[i]!='\0';i++)
{
	count=0;
	for(j=i+1;s1[j]!='\0';j++)
	{
		if(s1[i]==s1[j])
		{
			memmove(s1+j,s1+j+1,strlen(s1+j+1)+1);
			j--;
			count=1;
		}
		if(count==1)
		{
			memmove(s1+i,s1+i+1,strlen(s1+i+1)+1);
		         i--;
		}
	}

}
printf("%s",s1);
}
