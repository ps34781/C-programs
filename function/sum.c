#include <stdio.h>

//Prototype of function.
int add(int, int);
int sub(int, int);

void main() {
    int num1 = 0, num2=0;
    int sum = 0, diff = 0;

    printf("Enter the 1st Number : ");
    scanf("%d", &num1);
    printf("Enter the 2nd Number : ");
    scanf("%d", &num2);

    sum = add(num1, num2); //Calling a function.
    diff = sub(num1, num2); //Calling a function.

    printf("%d", sum);
    printf("\n");
    printf("%d", diff);
    printf("\n");
}

//Definition of a function.
int add(int a, int b) {
    int sum = 0;
    sum =  a + b;
    return sum;
}

int sub(int a, int b) {
    int diff = 0;
    diff =  a - b;
    return diff;
}
