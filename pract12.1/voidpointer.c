#include<stdio.h>
int main()
{
int a=5;
void *ptr=&a;
printf("%d",*(int*)ptr);
}

