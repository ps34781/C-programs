#include<stdio.h>
int poweroftwo(int);
int poweroftwo(int n)
{
	n--;
	n = n|n >> 1;
	n = n|n >> 2;
	n = n|n >> 4;
	n = n|n >> 8;
	n = n|n >> 16;
	
	return ++n;
}
void main()
{
	int n,i;
	printf("Enter the number\n");
	scanf("%d",&n);
	for(i=31;i>=0;i--)
	{
		if(n & (1<<i))
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf("\n");
	n = poweroftwo(n);
	printf("%d",n);
	printf("\n");
	for(i=31;i>=0;i--)
	{
		if(n & (1<<i))
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
