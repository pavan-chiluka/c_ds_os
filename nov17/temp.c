#include <stdio.h>

int main()
{
    int a;
    char c;
    int *ptr=&a;
    char *ptrc=&c;
    printf("%ld\n",sizeof(ptr));
    printf("%ld",sizeof(ptrc));
}
