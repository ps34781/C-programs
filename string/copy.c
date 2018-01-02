#include<stdio.h>
void main()
{
	char a[10],b[10];
	int i;
	printf("Enter the string\n");
	gets(a);
	for(i=0;a[i];i++)
	{
		b[i]=a[i];
	}
	b[i]=NULL;
	printf("The string is copied in: %s",b);
	printf("\n");
	
}
