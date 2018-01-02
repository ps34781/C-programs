#include<stdio.h>
#include<string.h>
void main()
{
	int i,j=0,k=0;
	char str[100],str1[10][20];
	printf("Enter the string:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i] == ' ')
		{
			str1[k][j]=str[i];
			j++;
			k=0;
		}
		else
		{
			str1[k][j]=str[i];
			k++;
		}
	}
	str1[k][j]='\0';
/*	for(k=0,j=0;str1[k][j];k++,j++)
	{
	printf("%c",str1[k][j]);
	}*/
    for (i = 0;i <= k;i++)

    {

        printf("%s ", str1[i]);

    }	
}
