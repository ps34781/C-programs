#include<stdio.h>
void main()
{
	int a[10],i,n,lar,small;
	n = sizeof(a)/sizeof(a[0]);
	printf("Enter number of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	lar=a[0];
	small=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>lar)
		{	
			lar=a[i];
		}
	
		else if(a[i]<small)
		{
			small=a[i]; 
		}
	}
	printf("the largest number of array %d\n",lar);
	printf("the smallest number of array %d\n",small);
}
