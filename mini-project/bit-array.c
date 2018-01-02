#include<stdio.h>
void main()
{
	int a1[6],a2[6],a4[6],i,n;
	char opt,set,Reset,toggle,Sdigit,Snibble,Sbit,a3[6];
	n = sizeof (a1)/sizeof (a1[0]);
	printf("Enter the 1st array\n");
	for(i=0;i<n;i++)
	{
		scanf(" %x",&a1[i]);
	}
	printf("Enter the 2nd array\n");
	for(i=0;i<n;i++)
	{
		scanf(" %x",&a2[i]);
	}
	printf("Enter your choice:1.Set\n2.Reset\n3.toggle\n4.Sdigit\n5.Snibble\n6.Sbit\n");
	for(i=0;i<n;i++)
	{
	scanf(" %c",&a3[i]);
	}
	for(i=0;i<n;i++)
	switch(a3[i])
	{
		
			case '1': 
					a4[i]=a1[i] | (1<<a2[i]);
					printf("%d\n",a4[i]);
					break;
			case '2' :
					a4[i]=a1[i]&~(1<<a2[i]);
					printf("%d\n",a4[i]);
					break;
			case '3' : 
					a4[i]=a1[i]^((1<<a2[i]));
					printf("%d\n",a4[i]);
					break;
			case '4' :
					a1[i]=a1[i]<<4;
					a2[i]=a2[i]<<4;
					a4[i]=a1[i]|a2[i];
					printf("%d\n",a4[i]);
					break;
			case '5' :
					a4[i]=(((((a1[i]>>4)&0x0f)|((a1[i]<<4)&0xf0))<<8)|(((a2[i]>>4)&0x0f)|((a2[i]<<4)&0xf0)));
					printf("%x\n",a4[i]);
					break;
			case '6' :
					a4[i] = ( 1 << a2[i] ) | a1[i];
					printf("%x\n",a4[i]);
					break;
			default:
					printf("Invalid input\n");
		} 

}
