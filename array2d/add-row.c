#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a[4][4],i,j,row,col,k,sum[4]={0};
	row = sizeof (a)/sizeof (a[0]);
	col = sizeof (a[0])/sizeof (a[0][0]);
	printf("The array element\n");
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
			printf(" %d ", a[i][j]);
		}
		printf("\n");
	}
	printf("the sum is:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum[i]+=a[i][j];
		}
		printf("%d\n",sum[i]);
	}
	printf("\n");
	for(i=0;i<row;i++)
	{
		for(j=i+1;j<row;j++)
		{
			if(sum[i]<sum[j])
			{
				for(k=0;k<col;k++)
				{
					a[i][k]=a[j][k] + a[i][k] - (a[j][k]=a[i][k]);
				}
			}
		}
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf(" %d ", a[i][j]);
		}
		printf("\n");
	}
	printf("the sum is:\n");
	int sum1[4]={0};
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum1[i]+=a[i][j];
		}
		printf("%d\n",sum1[i]);
	}


}
