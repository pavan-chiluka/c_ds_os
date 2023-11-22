#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	printf("enter a string");
	gets(str);
	char temp;
	int len=strlen(str);
	int i,j=len-1,m=0,n,p;
	for(i=0,j;i<=j;i++,j--)
	{
	temp=str[i];
	str[i]=str[j];
	str[j]=temp;
	}
	while(m<len)
	{
         n=m;
	 while((str[n]!=' ')&&(str[n]!='\0'))
	 {
		 n++;
	 }
	 for(p=n-1;p>=m;p--)
	 {
		 printf("%c",str[p]);
	 }
	 printf(" ");
	 if(str[n]=='\0')
	 {
		 break;
	}
	 m=n+1;
	}
}
