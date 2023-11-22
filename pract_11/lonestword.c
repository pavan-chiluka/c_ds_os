#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50];
	printf("enter a string");
	gets(s1);
	int max=0,index,count=0;
        int len=strlen(s1);
	int i=0,j;
  while(i<len)
  {
	  j=i;
	 while((s1[j]!=' ')&&(s1[j]!='\0'))
	  {
		  count=count+1;
		  j++;
	  }
	 if(s1[j]=='\0')
	 {
		 break;
         } 
	  if(count>max)
           {
	   max=count;
	   index=j-max;
	   count=0;
	   }
           i=j+1;
  }
if(count>max)
{
	max=count;
	index=len-max;
}
for(i=index;i<index+max;i++)
{
printf("%c",s1[i]);
}
printf("%d",max);
}

