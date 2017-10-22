#include<stdio.h>
void main()
{
	int num1,num2;
	printf("Enter any two number:");
	scanf("%d %d",&num1,&num2);
	printf("Original value of num1 = %d\n",num1);
	printf("Original value of num2 = %d\n",num2);
	num1 ^= num2;
	num2 ^= num1;
	num1 ^= num2;
	printf("num1 after swapping = %d\n",num1);
	printf("num2 after swapping = %d\n",num2);

}
