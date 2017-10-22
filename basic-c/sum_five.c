#include<stdio.h>
void main()
{
	int num,num1=0,sum=0;
	printf("Enter the number:\n");
	scanf("%d",&num);
	while(num!=0)
	{
		num1 = (num%10)+num1;
		num  = num/10;
	}
	printf("the sum of all digits%d",num1);
	printf("\n");
}
