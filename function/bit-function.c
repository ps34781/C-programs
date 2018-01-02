#include<stdio.h>
int swap_binary(int,int);
void main()
{
	int num,i,opt;
	printf("Enter the number\n");
	scanf("%d",&num);
	
	printf("Enter the number\n");
	scanf("%d",&i);
	printf("Enter your choice:1.Sdigit\n2.Snibble\n3.Sbit\n");
	scanf(" %d",&opt);
	num = swap_binary(num,i);
	printf("%d",num);
}
int swap_binary(int num,int i)
{
	int opt;
	switch(opt)
	{
		
			case '1' :
					num=num<<4|i<<4;
					printf("%d\n",num);
					break;
			case '2' :
					num=(((num>>4)&0x0f)|((num<<4)&0xf0));
					printf("%x\n",num);
					break;
			case '3' :
					num = ( 1 << i ) | num;
					printf("%x\n",num);
					break;
			default:
					printf("Invalid input\n");
		}
} 
