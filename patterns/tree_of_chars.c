#include<stdio.h>

void main() {
    int i = 0, j = 0, k = 0;
    int n;
    char ch = 'A';

    printf("Enter the number : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {

	for (k = n - 1 - i; k >= 0; k--) {
            printf(" ");
        }

        for(j=1; j <= (i*2) + 1; j++) {
            if ((i % 2) == 0) { //i is even
               if(ch > 'Z') { // Check if ch is lower-case then do nothing
                  ch = ch - 32;
	       }
            } else {
               if(ch < 'a') { // Check if ch is uppercase then do nothing
                  ch = ch + 32;
	        }
            }
            printf("%c", ch);
            ch = ch + 1;
        }
        printf("\n");
     }
}
