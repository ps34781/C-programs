#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],r[100];
	int len,i,index,wordstart,wordend;
	printf("Enter any string:");
	gets(str);
	len = strlen(str);
	index = 0;
	wordstart = len - 1;
	wordend = len - 1;
	while(wordstart>0)
	{
		if(str[wordstart]==' ')
		{
			i = wordstart + 1;
			while(i<= wordend)
			{
				r[index] = str[i];
				i++;
				index++;
			}
			r[index++]=' ';
			wordend = wordstart - 1;
		}
		wordstart--;
	}
	for(i=0;i<=wordend;i++)
	{
		r[index] = str[i];
		index++;
	}
	r[index] = '\0';
	printf("original string \n %s\n",str);
	printf("Revers order word\n %s",r);
	return 0;
}
