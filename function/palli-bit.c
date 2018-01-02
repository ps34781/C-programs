#include<stdio.h>
void palinbit(int);
void palinbit(int num)
{
	int j,i;
	for(i=0,j=31;j>=0;i++,j--)
	{
		if( ( 1 & (num>>i) ) != (1 & (num>>j) ) )
		{
			printf("number is not pallindrome");
			return 0;
		}
	}
	printf("number is pallindrome");
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
	palinbit(num);
	printf("\n");
	
}
