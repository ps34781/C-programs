#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *p,*q;
	p = malloc(sizeof(int));
	*p = 10;
	printf("%d\n",*p);
	printf("%lu\n",&p);
	//free(p);
	//*p = 23;
	//p = NULL;
	q = calloc(4,sizeof(int));
	printf("%d\n",sizeof(int));
	printf("%d\n",*q);
	printf("%lu\n",&q);
}
