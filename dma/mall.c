#include<stdio.h>
void main()
{
	int **a,i,j;
	a = malloc(2*sizeof(int *));
	for(i=0;i<2;i++)
	a[i]=malloc(sizeof(int)*3);
	for(i=0;i<2;i++)
	{
		for( j=0;j<3;j++)
		scanf("%d",a[i][j]);
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
	}
}
