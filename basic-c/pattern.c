:/*
123a
45bcd
6efghi
jklmnop
*/

#include<stdio.h>
void main()
{
	int n,i,j,k,n1=1;
	char ch='a';
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=i;j<=n-2;j++)
		{
			printf("%d",n1);
			if ((n1>=1) && (n1<9)) n1++;

		}
		for(k=1;k<=(i*2)+1;k++)
		{
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	}
}
