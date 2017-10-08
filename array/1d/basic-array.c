#include <stdio.h>

void main() {
	int arry[5] = {1, 2, 300, 500};
	int i = 0;

	printf("Printing Array : {");

	for (i=0; i < 5; i++) {
		printf("%d ", arry[i]);
	}
	printf("}\n");

	printf("Enter Values of Array: ");
	for (i=0; i < 5; i++) {
		printf("Enter value if index %d ", i);
		scanf("%d", &arry[i]);
	}

	for (i=0; i < 5; i++) {
		printf("%d ", arry[i]);
	}
	printf("}\n");
}
