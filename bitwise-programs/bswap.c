#include<stdio.h>
int swap(int,int,int);
int swap(int i,int j,int num)
{
	if(i==j)
	{
		return(num);
	}
	i = (1<<i)|(1<<j);
	printf("%d\n",i);
	num = num ^ i;
	printf("%d",num);
	return(num);
}
void main()
{
	int num,i,j,k;
	printf("enter the number\n");
	scanf("%d",&num);
	for(k=31;k>=0;k--)
	{
		if(num&(1<<k))
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf("\n");
	
	printf("enter the first bit to swap \n");
	scanf("%d",&i);
	printf("enter the second bit to swap \n");
	scanf("%d",&j);
	num = swap(i,j,num);
	printf("the number after swap: %d\n", num);
	for(k=31;k>=0;k--)
	{
		if(num&(1<<k))
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf("\n");
}
