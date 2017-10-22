#include<stdio.h>
void main()
{
	int num,f=1,i;
	printf("enter the number:");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		f=f*i;
	}
	printf("The factorial is %d",f);
}
