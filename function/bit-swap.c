#include<stdio.h>

//Prototype of function
void print_binary(int);

void main()
{
	int n,i,n1,n2;
        printf("LOG: variables are declared.");
	printf("Enter the number\n");
	scanf("%d",&n);
        printf("LOG: Input is %d.", n);

        //Call Function
        print_binary(n);
	for(i=0;i<31;i++)
	{
                 n = (((((n &  (3<<i)) >> 1)  |
		        ((n &  (3<<i)) << 1))  & (3<<i)) |
		     (n & ~(3<<i)) );
		i++;
		     	
		      
		//n=((((n&(3<<i)>>1)|((n&(3>>(i+1))<<1))&(3<<i)|((~(3<<i)))&n)));
	}
	printf("\nthe number after swaping of bit %d\n",n);
        //Call Function
        print_binary(n);
	printf("\n");
}

//Function definition
void print_binary(int n) {
        int i = 0;
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
}
