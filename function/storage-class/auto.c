#include <stdio.h>

void main() {
    int a, b;

    printf("Enter the Number : ");
    scanf("%d", &a);
    scanf("%d", &b);
    {
	int a = 20;
        printf("%d", a);
    }
    printf("a = %d", a);
    printf("b = %d", a);
    printf("Sum = %d\n", add(a, b));
}

int add(int a, int b) {
    auto int sum;

    printf("%d\n", sum);
    sum = a + b;
    return (sum);
}
