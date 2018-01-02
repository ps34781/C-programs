#include<stdio.h>
void swap(int a, int b);
void swap(int a, int b)
{
	a = b + a - (b=a);
}
void main()
{
	int a=10,b=20;
	void swap();
	swap(a,b);
	printf(" %d %d ",a,b);
}
