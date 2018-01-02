#include<stdio.h>
void main()
{
	char a[20],b[12];
	int i,j;
	printf("Enter the string 1st\n");
	scanf("%s",a);
	printf("Enter the string 2nd\n");
	scanf("%s",b);
	for(i=0;a[i];i++)
	{
	}
	for(j=0;b[j];j++)
	{
		a[i]=b[j];
		i++;
	}
	a[i]=NULL;
	printf("The string %s",a);
}
