#include<stdio.h>
void main()
{
	int a[10],n,i,*ptr=a;
	n=sizeof (a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	{
	scanf(" %d",ptr++);
	printf("\n");
	}
	for(i=0;i<n;i++)
	{
		printf("a  [%d]=%d\n",i,a[i]);
	}
	
	
}
