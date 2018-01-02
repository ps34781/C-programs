#include<stdio.h>
void main()
{
	char a[10],ch;
	int i,index=-1;
	printf("Enter the string\n");
	gets(a);
	printf("Enter the charcter to find\n");
	scanf("%c",&ch);
	for(i=0;a[i];i++)
	{
		if(a[i]==ch)
		{
			index = i;
			break;
		}
		
	}
	if(index>-1)
	{
		printf("%d index is %c",index,ch);
	}
	else
	{
		printf("Charcter not found");
	}
	printf("\n");
}
