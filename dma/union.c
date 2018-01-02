#include<stdio.h>
int get_enidian();
void convert_littleto_big(int*);
void print_binary(int);
union un
{
	int idata;
	char cdata;
};
int get_enidian()
{
        union un un1;  //un define the variable of union
	un1.idata = 10; // un1 
	//(un1.cdata == 10)?return (0):return (1);
	return((un1.cdata == 10) ? 0:1);
}
void print_binary(int num)
{
	int i;
	for (i = 31; i>=0; i--) 
	{
		(num & (1<<i))?printf("1"):printf("0");	
	}
}
void convert_littleto_big(int *p)
{
	    *p = (((*p>>24)&0x000000ff)|((*p>>8)&0x0000ff00)|
		((*p<<8)&0x00ff0000)|((*p<<24)&0xff000000));

}

void main()
{
	int num,i;
	int *p = &num;
	printf("enter the data\n");
	scanf("%d",&num);
	print_binary(num);
	printf("\n");
	if (get_enidian() == 0)
	{
		printf("little enidian\n");
	        convert_littleto_big(p);
	}
	else
	{
		printf("Big enidian\n");
	}
	
	print_binary(num);
	printf("\n");
}
