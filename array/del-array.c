#include<stdio.h>
void main()
{
	int a[6],n,j,i,num;
	n= sizeof (a)/sizeof (a[0]);
	printf("Enter the array element\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the number\n");
	scanf("%d",&num);

	printf("Array Before deleting %d.\n", num);
	for(i=0;i<n;i++)
	   printf("%d ",a[i]);

	printf("\n");
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
		/*	if(i<n) 
			{
				n=n-1;*/
				for(j=i;j<n;j++)
				{
					a[j]=a[j+1];
				}
			//}
				i--;
				a[n-1]=0;
		}
	}

	printf("\n");
	printf("\n");
	printf("Array After deleting %d.\n", num);
	for(i=0;i<n;i++)
	   printf("%d ",a[i]);

	printf("\n");
}
