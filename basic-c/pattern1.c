#include<stdio.h>
void main()
{
	int i,j,k,n1=1,n;
	char ch='A';
	char ch1='a';
	printf("Enter the number\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			printf(" ");
		}
		for(k=1;k<=(i*2)+1;k++)
		{
			if(i%2==0)
			{
				printf("%c",ch);
				ch++;
			}
			else
			{
				printf("%c",ch1);
				ch1++;
		//		printf("%d",n1);
		//		n1++;
			}
			
		}
		printf("\n");
	}
}
