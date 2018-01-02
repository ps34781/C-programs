#include<stdio.h>
void main()
{
	int a[5],i,n,even_num=0,odd_num=0;
	n = sizeof (a)/sizeof (a[0]);
	printf("Enter the number of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if((a[i]<0)|(a[i]>9))
		{
			printf("invalid input,try again\n");
			i--;
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			odd_num=odd_num*10+a[i];
		}
		else {
			even_num=even_num*10+a[i];
		}
	}
	for(i=n-1;i>=0;i--)
	{
		if(even_num)
		{
			a[i]=even_num%10;
			even_num /=10;
		}else
		{
			a[i]=odd_num%10;
			odd_num /=10;
		}
	}
		for(i=0;i<n;i++)
		printf("%d",a[i]);
}
