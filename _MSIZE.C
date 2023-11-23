#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *p;
	p=(int*)malloc(sizeof(int));
	
	printf("%d ",_msize(p));
	
	printf("%d ",_msize(p));
	p=(int*)calloc(100,sizeof(int));
	printf("%d ",_msize(p));
	p=(int*)realloc(p,200*sizeof(int));
	printf("%d ",_msize(p));
	free(p);
	printf("%d ",_msize(p));
	
	
	
	
	
}
