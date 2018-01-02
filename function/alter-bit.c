#include<stdio.h>
void alterbit(int);
void alterbit(int num)
{
	int i;
	for(i=31;i>0;i--)
	{
		if( ( num & (1<<i) ) == (num & (1<<(i-1)) ) )
		{
			printf("the alternat bit is same");
			return 0;
		}
	}
	printf("the alternate bit is not same");
}
void main()
{
	int i,num;
	printf("enter the number\n");
	scanf("%d",&num);
	for(i=31;i>=0;i--)
	{
		if( num & ( 1<<i ) )
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf("\n");
	alterbit(num);
	printf("\n");
	
}
