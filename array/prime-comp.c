#include<stdio.h>
void main()
{
	int a[5],i,n,prime_num=0,comp_num=0,d;
	n = sizeof (a)/sizeof (a[0]);
	printf("Enter the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(d=2;d<a[i];d++)
		{
			if(a[i]%d!=0)
			{
				prime_num = prime_num*10+a[i];
			}
			else
			{
				comp_num = comp_num*10+a[i];
			}
		}
	}
	for(i=n-1;i>=0;i--)
	{
		if(comp_num)
		{
			a[i] = comp_num%10;
			comp_num /=10;
		}
		else
		{
			a[i]=prime_num%10;
			prime_num /= 10;
		}
	}
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}
