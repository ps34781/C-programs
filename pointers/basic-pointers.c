#include <stdio.h>

void main() {
	int i =0;
	int *ptr;
	ptr = &i;

	i = 20;

	printf("i = %d\n", i);
	printf("&i = %lu\n", &i);
	printf("ptr = %lu\n", ptr);

	i = 30;

	printf("&ptr = %lu\n", &ptr);
	printf("*ptr = %d\n", *ptr);
	printf("ptr++ = %lu\n", ptr++);
	printf("++ptr = %lu\n", ++ptr);

	ptr = &i;
	*ptr = 500;

	printf("++*ptr = %d\n", ++*ptr);
	printf("i = %d\n", i);
}
