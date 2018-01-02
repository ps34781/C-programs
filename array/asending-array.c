#include<stdio.h>
void main()
{
	int a[6],i,n,j;
	n = sizeof (a)/sizeof (a[0]);
	printf("Enter the element of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				a[j]=a[i]+a[j]-(a[i]=a[j]);
			}
		}
	}
	printf("Elements after sorting in asending order\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
