#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a[3][3],b[3][3],i,j,row,col;
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
			b[i][j]= rand()%10;
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf(" %d ",a[i][j]);
		}
		
		if(i==1)
		{
			printf("\t");
			printf(" + ");
			printf("\t");
		}
		else
		{
			printf("\t");
			printf("\t");
		}
		for(j=0;j<col;j++)
		{
			printf(" %d ",b[i][j]);
		}
		if(i==1)
		{
			printf("\t");
			printf(" = ");
			printf("\t");
		}
		else
		{
			printf("\t");
			printf("\t");
		}
		for(j=0;j<col;j++)
		{
			printf(" %d ",a[i][j]+b[i][j]);
		}
		
		printf(" \n ");
	}
	
}
