#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50]={"pavanchiluka"};
	char s2[40],ele;
	int pos;
	printf("enter a ele,pos");
	scanf("%c %d",&ele,&pos);
	int i,j;
	for(i=0,j=0;i<pos;i++,j++)
	{
		s2[j]=s1[i];
	}
	s2[pos]=ele;
	j=j+1;
	for(i,j;s1[i]!='\0';i++,j++)
	{
		s2[j]=s1[i];
	
	}
	s2[j]='\0';
	printf("%s",s2);
}
