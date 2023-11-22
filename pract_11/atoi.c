#include<stdio.h>
#include<string.h>
int myatoi(char str[]);
int main()
{
	char str[50];
	printf("enter a string");
	gets(str);
	int result=myatoi(str);
	printf("%d",result);
}
int myatoi(char str[])
{
 int i,sum=0;
 for(i=0;str[i]!='\0';i++)
 {
 sum=sum*10+str[i]-'0';
 }
 return sum;
}

