#include<stdio.h>
void main()
{
	int a,b,i;
	printf("Enter the value of a\n");
	scanf("%d",&a);
	for(i=0;i<=9;i++)
	{
		printf("Enter value of b\n");
		scanf("%d",&b);
		if(a<b)
		{
			a=b;
		}
	}
	printf("The largest number is:%d\n",a);
}
