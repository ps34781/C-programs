#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the number\n");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("swapping of a:%d and b:%d",a,b);
}
