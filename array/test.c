#include "stdio.h"

void main (void)
{
	int a[6],i, len, j, counter;
	counter = len = (sizeof(a)/sizeof(a[0])) -1;
	j = len -1;
	printf("Enter the digits: \n");
	for(i = 0; i <= len;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=len; i>0; i--)
	{
		if((a[j]%2 == 0) &&(a[i]% 2 != 0))
		{
			a[i] = a[j] + a[i] -(a[j] = a[i]);
			if(i<len)
			{
				i++;
				j++;
			}
			//else
			//{
			//	i = counter;
			//	j = counter -1;
			//}

		}
		else
		{
			j--;
			counter--;
		}

	}
	
	printf("output is \n");
	for(i = 0; i <= len;i++)
	{
		printf("%d \n", a[i]);
	}
}
