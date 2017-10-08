#include <stdio.h>

void main() {
	int arry[5] = {1, 2, 300, 500};
	int i = 0;

	printf("Printing Array : {");

	for (i=0; i < 5; i++) {
		printf("%d ", arry[i]);
	}
	printf("}\n");
}
