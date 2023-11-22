#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **ptr,i,j,r,c;
	scanf("%d%d",&r,&c);
	ptr=(int**)malloc(r*sizeof(int**));
	for(i=0;i<c;i++)
	{
	ptr[i]=(int*)malloc(c*sizeof(int));
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
	        {
			scanf("%d",&ptr[i][j]);
		}
	}
       	for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        printf("%d",ptr[i][j]);
                }
        }
	for(i=0;i<r;i++)
	{
	 free(ptr[i]);
	}
	free(ptr);
}



