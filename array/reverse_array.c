#include<stdio.h>
void main()
{
	int a[10],n,i;
	n = sizeof(a)/sizeof(a[0]);
	printf("enter the value of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("number before reverse\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<n/2;i++)
	{
		a[i] = a[i]+a[n-1-i]-(a[n-1-i]=a[i]);
		
	}
	printf("\nnumber after reverse\n");
	for(i=0;i<n;i++)
	{
		
		printf("%d ",a[i]);
		
	}
	printf("\n");
}	


















































































 	
