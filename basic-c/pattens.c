/*
---a---
--BcD--
-eFgHi-
jKlMnOp
i 1 1 2 3
j0 2 3 4
k6 4 2
*/
#include<stdio.h>
void main()
{
	int i=0,j=0,k=0,n;
	char ch='a';
	printf("enter the number\n");
	scanf("%d",&n);
	for(i= 0; i < n; i++)
	{
		for (k=n-1-i; k>=0; k--){
			printf(" ");
		}
		for(j=1;j<=(i*2)+1;j++)
		{
			printf("%c", ch);
			ch++;
			if(ch < 'Z') {
				ch = ch + ' ';
			} else{
				ch = ch - ' ';
			}
		}
		printf("\n");
	}
}
