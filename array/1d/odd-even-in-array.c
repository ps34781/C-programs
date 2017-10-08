#include <stdio.h>

void main() {
	int arry[5] = {};
	int i = 0;
	int even = 0, odd = 0;

	int size = sizeof(arry)/sizeof(arry[0]); //Get no. of elements in array
	printf("%d\n", size); //print number of elements

	/*
	 * Loop to no. of elements and scan data in each index of array. 
	 */
	for (i = 0; i < size; i++) {
		printf("Enter the value of index %d : ", i);
		scanf("%d", &arry[i]);
	}

	/*
	 * Print entered values.
	 * Count number of odds and evens.
	 */

	printf ("Entered values are : ");
	for (i = 0; i < size; i++) {
		printf("%d ", arry[i]);

                if (i < (size - 1))
			printf(",");

		if (arry[i] % 2) {
			odd++;
		} else {
			even++;
		}
	}
	
	/*
	 * print odds and evens.
	 */
	printf("\n");
	printf("No os odds = %d\n", odd);
	printf("No os evens = %d\n", even);
}
