#include<stdio.h>
void main()
{
	int j,k;
	for(j=0 ; j<=3 ; j++)
	{
		printf("\nDecimal %d is same as binary",j);
		for(k=31 ; k>=0 ; k--)
		{
			if(j & (1<<k))
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		j = ~j;
		printf("\n one's compliment of %d is",j);
		for(k=31 ; k>=0 ; k--)
		{
			if(j & (1<<k))
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
	}
}
