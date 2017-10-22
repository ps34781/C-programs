#include<stdio.h>
void main()
{
	int a,b;
	printf ("enter the value of a and b:");
	scanf("%d \n %d",&a,&b);
	a  = a + b - (b=a);
	printf("swap values are %d %d",a,b);
	printf("\n");
}
