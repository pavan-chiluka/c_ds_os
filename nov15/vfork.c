#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<ctype.h>
int main()
{
        int i,n=1;
        int id=vfork();
        if(id==0)
        {
                printf("it is child");
        }
        else
        {
         printf("it is parent");
        }
        for(i=7;i>=0;i--)
        {
                printf(" %d ",n);
                n++;
        }
        printf("\n");
}
    
