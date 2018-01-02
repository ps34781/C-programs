#include<stdio.h>
void pallindrome(int);
void pallindrome(int num)
{
	int n,num1=0;
	n=num;
	while(n!=0)
	{
		num1=num1*10+n%10;
		n = n/10;
	}
	if(num==num1)
	{
		printf("number is pallindrome\n");
	}
	else
	{
		printf("number is not pallindrome\n");
	}
	
}
void main()
{
	int num,num1;
	printf("enter the number\n");
	scanf("%d",&num);
	pallindrome(num);
	printf("\n");
	
}
