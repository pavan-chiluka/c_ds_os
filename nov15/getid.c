#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<ctype.h>
int main()
{
        int i,n=1;
        int id= fork();
        if(id==0)
        {
                printf("it is child\n");
		printf("%d",getpid());
        }
        else
        {
         printf("it is parent\n");
	 printf("%d",getpid());
        }
	printf("\n");
        for(i=7;i>=0;i--)
        {
                printf("%d",n);
                n++;
        }
        printf("\n");

}
