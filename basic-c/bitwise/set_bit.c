#include<stdio.h>
void main()
{
	int num,n,num1;
	printf("Enter the number\n");
	scanf("%d",&num);
	printf("Enter the bit to set:");
	scanf("%d",&n);
	num1=(1<<n)|num;
	printf("Number before setting %d bit : %d",n,num);
	printf("Number after setting %d bit:%d",n,num1);
	printf("\n");
}
