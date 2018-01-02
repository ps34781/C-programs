#include<stdio.h>
#include<stdlib.h>
void main()
{

	int a[5][5],i,j,row,col,k,l;
	row = sizeof (a)/sizeof (a[0]);
	col = sizeof (a[0])/sizeof (a[0][0]);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			a[i][j]= rand()%10;
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
		printf("\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col/2;j++)
		{
			a[i][j]=a[i][col-1-j]+a[i][j]-(a[i][col-1-j]=a[i][j]);
		
			
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
