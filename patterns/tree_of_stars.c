#include<stdio.h>

void main() {
    int i = 0, j = 0, k = 0;
    int n;
        printf("Enter the number : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {

	for (k = n - 1 - i; k >= 0; k--) {
            printf(" ");
        }
        for(j=1; j <= (i*2) + 1; j++) {
            printf("0");
        }
        printf("\n");
    }
}
