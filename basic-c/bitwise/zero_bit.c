#include<stdio.h>
void main()
{
	int num,zero,i,count;
	num=8*sizeof(int);
	printf("enter the number");
	scanf("%d",&num);
	zero=0;
	count = 8 * sizeof(int);
	for(i=0;i<8*sizeof(int);i++)
	{
		if((num>>i) | 0)
		{
			zero++;
		}
	}
	printf("The number %d of zero is  %d\n",num,zero);
}
