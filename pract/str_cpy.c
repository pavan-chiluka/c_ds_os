#include<stdio.h>
#include<string.h>
char* str_cpy(char s1[],char s2[]);
int main()
{
	char s1[50];
	char s2[50];
	printf("enter two strings");
	scanf("%s %s",s1,s2);
	char *p;
	p=str_cpy(s1,s2);
       printf("%s",p);
 }
char* str_cpy(char s1[],char s2[])
{
int i,j;
for(i=0,j=0;s1[i]!='\0';i++,j++)
{
	s2[j]=s1[i];

}
s2[j]='\0';
return s2;
}

