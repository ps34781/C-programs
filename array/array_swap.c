#include<stdio.h>
void scan_array(int *p,int);
void print_array(int *p,int);
void main()
{
	int a[5],i,n;

	n = sizeof(a)/sizeof(a[0]);
	scan_array(a,n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(i+1<=n-1)
		{ 
       			a[i]=a[i]+a[i+1]-(a[i+1]=a[i]);
		}	
	}
	printf("\n");
	print_array(a,n);
	
}
void scan_array(int *p,int size)
{
	int i;
	
	printf("enter the number of array\n");
	for(i=0;i<size;i++)
	{
		scanf(" %d",p++);
	}
}
void print_array(int *p, int size)
{
	int i;
	for(i=0;i<size;i++)
	{
	printf("swap elements of array %d\n",*p++);
	}
	printf("\n");

}

