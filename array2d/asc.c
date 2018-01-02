#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a[4][4],i,j,row,col;
	row = sizeof (a)/sizeof (a[0]);
	col = sizeof (a[0])/sizeof (a[0][0]);
	printf("The array element is =\n");
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
			printf(" %d ",a[i][j]);
		}
			printf("\n");
	}
	printf("The result is = \n");
	for(i=0;i<row*col;i++)
	{
		for(j=i+1;j<row*col;j++)
		{
			if(a[0][i]>a[0][j])
			{
				a [0][i] = a[0][j] + a[0][i] - (a[0][j]=a[0][i]);
			}
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf(" %d ",a[i][j]);
		}
			printf("\n");
	}
}
