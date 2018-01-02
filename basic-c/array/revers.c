#include<stdio.h>
void main()
{
	int a[10],i;
	printf("Enter the value of index\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		a[i] = a[i] + a[4-i] - (a[4-i] = a[i]);
	}
	printf("the revers number is:%d",a[i]);
}
