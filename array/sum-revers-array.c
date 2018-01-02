#include<stdio.h>
void main()
{
	int a[5],i,n,n1=0,n2=0;
	n= sizeof (a) / sizeof (a[0]);
	printf("Enter the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		n1 = (n1 * 10) + (a[i]);
	}
	printf("%d\n",n1);
	while(n1!=0)
	{
		n2 = ( n2 * 10 ) + n1 % 10;
		n1 = n1/10;
				
	}
	printf("%d",n2);
}
