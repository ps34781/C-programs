#include<stdio.h>
void main()
{
	int a[6],i,n,j,max=0,min=0;
	n = sizeof (a)/sizeof (a[0]);
	printf("Enter the element of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
			if(a[i]>max)
			{
				max=a[i];
			}
			if(a[i]<min)
			{
				min=a[i];
			}
			
	}		
	printf("the max value is %d\n",max);
	printf("the min value is %d\n",min);
	printf("\n");
}
