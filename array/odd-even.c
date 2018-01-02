#include<stdio.h>
void main()
{
	int a[5],i,n;
	n= sizeof (a)/sizeof (a[0]);
	printf("Enter the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("the number %d is even\n",a[i]);
		}
		else
		{
			printf("the number %d  is odd\n",a[i]);
		}
	}
	printf("\n");
	
}
