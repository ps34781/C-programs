#include<stdio.h>
void main()
{
	int i,n;
	char a[5];
	n = sizeof a/sizeof a[0];
	printf("Enter the array\n");
	for(i=0;i<n;i++)
	{
		scanf(" %c",&a[i]);
		if((a[i] < 'A') || (a[i] > 'z')) {
			printf("Error: Invalid input\n");
			return;
		}
	}
	for(i=0;i<n;i++)
	{
		if(((i%2)==0) && ( a[i] > 'Z' ))
		{
			a[i] = a[i] - 32;
		}
		if(((i%2)!=0) && ( a[i] <= 'Z' ))
		{
			a[i] = a[i] + 32;
		}
			    
		printf("%c",a[i]);
	}
	printf("\n");
}
