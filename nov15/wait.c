#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
        int i,n=1;
        int id= fork();
        if(id==0)
        {
                printf("it is child");
        }
        else
        {
         printf("it is parent");
        }
	if(id!=0)
	{
	wait(0);
	}
        for(i=7;i>=0;i--)
        {
                printf("%d",n);
                n++;
        }
        printf("\n");
}
 
