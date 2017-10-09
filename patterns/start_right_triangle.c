#include<stdio.h>

void main() {
    int i = 0, j = 0;
    int n;
        printf("Enter the number : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for(j=1; j <= i+1; j++) {
            printf("*");
                }
        printf("\n");
        }
}
