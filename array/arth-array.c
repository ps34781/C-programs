#include<stdio.h>
void main()
{
	int a1[5],a2[5],i,n,j,k,a4[5];
	char a3[5];
	n = sizeof (a1) / sizeof (a1[0]);
	printf("Enter the 1st array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a1[i]);
	}
	n = sizeof (a2) / sizeof (a2[0]);
	printf("Enter the 2nd array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a2[i]);
	}
	n = sizeof (a3) / sizeof (a3[0]);
	printf("Enter the operand\n");
	for(i=0;i<n;i++)
	{
		scanf(" %c",&a3[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(a3[i]=='+')
		{
			a4[i]=a1[i]+a2[i];
		
		}
		else if(a3[i]=='-')
		{
			a4[i]=a1[i]-a2[i];
		}
		else if(a3[i]=='*')
		{
			a4[i]=a1[i]*a2[i];
		}
		else if(a3[i]=='/')
		{
			a4[i]=a1[i]/a2[i];
		}
		
		else if(a3[i]=='%')
		{
			a4[i]=a1[i]%a2[i];
		}
		printf("| %d | | %c | | %d | = | %d |\n",a1[i],a3[i],a2[i],a4[i]);
	}
	printf("\n");
}
