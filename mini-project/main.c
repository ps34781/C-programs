#include <stdio.h>
#include "local-math.h"

void menu(); //Define Prototype of function

void main() {
    char opt = 0;
    int num1 = 0, num2 = 0;
    while (1) {
        menu(); // Call The Function
        printf("Enter your choice : ");    
        scanf("%c", &opt);
        switch (opt) {
            case '+' :
                 add();
                 break;
            case '-' :
                 sub();
                 break;
            case '*' :
                 mul();
                 break;
            case '/' :
                 div();
                 break;
            default :
                 printf("Invalid Input\n");
        }
    }
}

void menu() { //Define Function
    printf("#########################################\n");
    printf("#                 Menu                  #\n");
    printf("#########################################\n");
    printf("# Add             Press : +     #\n");
    printf("# Subtract        Press : -     #\n");
    printf("# Multiply        Press : *     #\n");
    printf("# Divide          Press : /     #\n");
    printf("#########################################\n");
}
