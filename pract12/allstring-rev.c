/*#include<stdio.h>
#include<string.h>
char* str_rev(char s1[],char s2[]);
int main()
{
        char s1[50]={"hi pavan chiluka"};
        char s2[50];
        char *p;
        p=str_rev(s1,s2);
        printf("%s",p);
}
char* str_rev(char s1[],char s2[])
{
        int i,j;
        for(i=0;s1[i]!='\0';i++);
        for(i=i-1,j=0;i>=0;i--,j++)
        {
                s2[j]=s1[i];
        }
        s2[j]='\0';
        return s2;
}*/
/*#include<stdio.h>
#include<string.h>
char str_rev(char *str);
int main()
{
        char s1[50]={"hi pavan"};
        str_rev(s1);
}
char str_rev(char *str)
{
if(*str)
{
str_rev(str+1);
printf("%c",*str);
}
}*/
#include<stdio.h>
#include<string.h>
/*char str_rev(char s1[]);
int main()
{
        char s1[50]={"hi pavan"};
        str_rev(s1);
}
char str_rev(char s1[])
{
        char temp;
        int i,len=strlen(s1);
        int j=len-1;
        for(i=0,j;i<=j;i++,j--)
        {
                temp=s1[i];
                s1[i]=s1[j];
                s1[j]=temp;
        }
        printf("%s",s1);
}*/
/*#include<stdio.h>
#include<string.h>
char str_rev(char s1[]);
int main()
{
        char s1[50]={"hi pavani"};
        str_rev(s1);
}
char str_rev(char s1[])
{
        int i=0,j=strlen(s1)-1;
        char temp;
        char *startpoi=s1;
        char *endpoi=s1+j;
        for(i=0,j;i<=j;i++,j--)
        {
                temp=*startpoi;
                *startpoi=*endpoi;
                *endpoi=temp;
                startpoi++;
                endpoi--;
        }
        printf("%s",s1);
}*/
#include<stdio.h>
#include<string.h>
char str_rev(char s1[]);
int main()
{
        char s1[50]={"hi pavan"};
        char(*ptr)(char*)=&str_rev;
        ptr(s1);
}
char str_rev(char s1[])
{
        int i,j,len=strlen(s1);
        char temp;
        for(i=0,j=len-1;i<=j;i++,j--)
        {
                temp=s1[i];
                s1[i]=s1[j];
                s1[j]=temp;
        }
        printf("%s",s1);
}










