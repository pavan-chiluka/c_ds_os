#include<stdio.h>
int main()
{
/*{pointer to an array
	int arr[5]={1,2,3,4,5};
	int *p=arr;
	int (*ptr)[5]=&arr;

	printf("%p %p\n",p,ptr);
	printf("%d %d\n",*p,**ptr);
        printf("%d %p\n",*p,*ptr);
        printf("print addressof next %p \n", (*ptr+4));
	printf("print value %d",*(*ptr+4));
}*/
//array of pointer.
	int arr[5]={1,2,3,4,5};
        int arr2[5]={6,7,8,9,10};
        int arr3[5]={11,12,13,14,15};
        int *ptr[3];
	ptr[0]=arr;
	ptr[1]=arr2;
	ptr[2]=arr3;
	printf("%p\n",ptr[0]+4);
	printf("%d\n",*ptr[0]);
	printf("%d\n",*(ptr[0]+4));
}

	
	
