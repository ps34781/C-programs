#include<stdio.h>
void main()
{
	int num,num1,revers,temp=0;
	printf("Enter the number:");
	scanf("%d",&num);
	while(num!=0)
	{
		num1 = num%10;
		temp = temp*10+num1;
		num  = num/10;
	}
	printf("The revers number is:%d\n",temp);
}
