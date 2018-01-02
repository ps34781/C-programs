#include<stdio.h>
#include<string.h>
void ispallindrome(char*);
void ispallindrome(char * a)
{
	int i,j;
	for(i=strlen(a)-1,j=0;j<=strlen(a)/2;i--,j++)
	{
		if(a[i]!=a[j])
		{
			printf("string is not pallindrome\n");
			return 0;
		}
	}
	printf("string is pallindrome\n");
}
void main()
{
	char a[10];
	int i;
	printf("enter the string\n");
	gets(a);
	ispallindrome(a);
	printf("\n");
}
