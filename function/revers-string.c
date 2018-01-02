#include<stdio.h>
#include<string.h>
void revstr(char*);
void revstr(char *s)
{
	int i,index;
	for(index=strlen(s)-1;index>=0;index--)
	{
		printf("%c",s[index]);
	}
	while(index<strlen(s))
	{
	for(i=0;s[index]!='\0';i++)
	{
		printf("%c",s[i]);
	}
	index++;
	}
	
	
}
void main()
{
	char s[50];
	int i;
	printf("Enter the string\n");
	gets(s);
	for(i=0;s[i];i++)
	{
	printf("%c",s[i]);
	}
	printf("\n");
	revstr(s);
	printf("\n");
}
