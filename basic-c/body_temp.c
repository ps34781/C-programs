#include<stdio.h>
void main()
{
	int temp;
	float var;
	printf("enter your choice in c and fah\n");
	printf("1.cel\n2.fah\n");
	scanf("%d",&temp);
	printf("enter your temp\n");
	scanf("%f", &var);
	switch(temp)
	{
		case 1: 
			if(var>38)
			{
				printf("Body have fever\n");
			}
			else
			{		
				printf("Body dont have fever\n");
			}
		case 2:
			if(var>96)
			{
				
				printf("Body have fever\n");
			}
			else
			{	
				printf("Body dont have fever\n");
			}		
	}
}
