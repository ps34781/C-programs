#include<stdio.h>
void main()
{
	int a,b,i,j,isprime;
	printf("Enter the starting range :");
	scanf("%d", &a);
	printf("Enter the lower range :");
	scanf("%d", &b);

       	printf("all prime number b/w %d to %d are:\n", a, b);
	for(i = a ; i <= b ; i++)
	{	
		isprime=1;
		for(j = 2; j <= i/2 ; j++)
		{
			if(i%j==0)
			{
				isprime=0;
				break;
			}
		
		}
		if(isprime==1)
		{
		printf(" %d, ", i);
		}
	}
	printf("\n");
	
}
