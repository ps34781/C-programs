#include<stdio.h>
void main()
{
	int cel;
	float fa;
	printf("Enter celsius:");
	scanf("%d",&cel);
	fa = cel * 1.8 + 32;
	printf("The temperature in fahrenheint: %f\n",fa);
}
