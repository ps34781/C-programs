#include<stdio.h>
void main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	if((num&1)==1)
	{
		printf("%d is odd",num);
	}
	else
	{
		printf("%d is even",num);
	}
	printf("\n");
}
