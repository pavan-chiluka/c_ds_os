#include<stdio.h>
void pointertoconstant(const int *ptr)
{
printf("%d",*ptr);
//we cannot increment (*ptr)++;
//but we can chane address of ptr.
int m=6;
++ptr;
ptr=&m;
printf("%d\n",*ptr);
}
void constantpointer(int *const ptr)
{
//we cannot change address but we can increment the value
//ptr++;
printf("%d\n",*ptr);
(*ptr)++;
printf("%d\n",*ptr);
}
void constantpointer_pointertoconstant(const int *const ptr)
{
//we cannot change value and address.
printf("%d %p\n",*ptr,&ptr);
}
int main()
{
	int n=5;
	pointertoconstant(&n);
	constantpointer(&n);
	constantpointer_pointertoconstant(&n);
}
