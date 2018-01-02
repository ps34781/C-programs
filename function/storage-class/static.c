#include <stdio.h>
//int sum = 10;

void main() {
    int a, b;

    printf("Enter the Number : ");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("Sum = %d\n", add(a, b));
    printf("Sum = %d\n", add(a, b));
    printf("Sum = %d\n", add(a, b));
}

int add(int a, int b) {
    static int sum = 10;  // Initialize
    //int sum = 10;
    //sum = 10;

//    printf("%d\n", sum);
    sum += (a + b);
    return (sum);
}
