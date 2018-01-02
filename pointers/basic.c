#include<stdio.h>
void main()
{
	char a[10]={0,11,22,33,44,55,66,77,88,99};
	char *p=a;
	printf("sizeof a = %ld\n",sizeof(a));
	printf("sizeof *p = %ld\n",sizeof(*p));
	printf("sizeof p = %ld\n",sizeof(p));
	printf("sizeof &p = %ld\n",sizeof(&p));
	printf("*p++=%d\n",*p++);
	printf("*(p++)=%d\n",*(p++));
	printf("(*p)++=%d\n",(*p)++);
	printf("*++p=%d\n",*++p);
	printf("++*p=%d\n",++*p);
	printf("*(++p)=%d\n",*(++p));
	for(int i=0;i<10;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}	

}
