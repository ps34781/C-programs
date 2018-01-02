#include <stdio.h>
#include <stdlib.h>

void main() {
     int *ptr = NULL;
     int block = 0, i = 0;

     printf("Enter number of entries : ");
     scanf("%d", &block);

     ptr = (int *)calloc(block , sizeof(int));

     for(i=0; i<block; i++) {
        printf("Enter marks of Roll No: %d : ", i);
        scanf("%d", &ptr[i]);
     }

     for(i=0; i<block; i++) {
        printf("marks of Roll No: %d : %d\n", i, ptr[i]);
     }
}
