 #include<stdio.h>
void main()
{
	int num1,swapnum;
	printf("Enter number\n");
	scanf("%d",&num1);
	swapnum = (((num1 & 0xF0F0F0F0)>>4)|((num1 & 0x0F0F0F0F)<<4));
	printf("Swapped number is %d\n",swapnum);
}
