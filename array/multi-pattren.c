#include<stdio.h>
void main()
{
	char a[5];
	int i,j,k,l,m,n,o,w;
	n = sizeof (a)/sizeof (a[0]);
	printf("Enter the array\n");
	for(i=0;i<n;i++)
	{
		scanf(" %c",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(w=n-1-i;w>=0;w--)
		{
			printf(" ");
		}
		for(j=i;j<=i+1;j++)
		{
			printf("%c\n",a[j]);
			for(k=)
	
	}
	printf("\n");
}
