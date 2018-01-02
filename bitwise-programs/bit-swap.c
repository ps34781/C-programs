#include<stdio.h>
void main()
{
	int n,i,n1,n2;
	printf("Enter the number\n");
	scanf("%d",&n);
	for (i = 31; i>=0; i--)
	{
		if (n & (1 << i)) 
		{
			printf("1");
		} 
		else 
		{
			printf("0");
		}
	}
	for(i=0;i<31;i++)
	{
                 n = (((((n &  (3<<i)) >> 1)  |
		        ((n &  (3<<i)) << 1))  & (3<<i)) |
		     (n & ~(3<<i)) );
		i++;
		     	
		      
		//n=((((n&(3<<i)>>1)|((n&(3>>(i+1))<<1))&(3<<i)|((~(3<<i)))&n)));
	}
	printf("\nthe number after swaping of bit %d\n",n);
	for (i = 31; i>=0; i--)
	{
		if (n & (1 << i)) 
		{
			printf("1");
		} 
		else 
		{
			printf("0");
		}
	}
	printf("\n");
}
