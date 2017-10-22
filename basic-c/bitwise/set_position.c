#include<stdio.h>
void main()
{
	int num,i;
	int count = 8 * sizeof(int);
	printf("Enter any number:");
	scanf("%d",&num);
	for(i=0;i<count;i++)
	{
		if((num>>i) & 1)
		{
			printf("set position is %d\n",i);
		}
	}
}
