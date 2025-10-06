#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int main() {
    int a, b;
    char op;
    int add(int, int);
    int subtract(int, int);
    int multiply(int, int);
    int divide(int, int);
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    while (1) {
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("Result: %d\n", add(a, b));
            a = a + b;
            break;
        case '-':
            printf("Result: %d\n", subtract(a, b));
            a = a - b;
            break;
        case '*':
            printf("Result: %d\n", multiply(a, b));
            a = a * b;
            break;
        case '/':
            printf("Result: %d\n", divide(a, b));
            if (b != 0) {
                a = a / b;
            } else {
                printf("Error: Division by zero.\n");
            }
            break;
        default:
            printf("Error: Invalid operation.\n");
            break;
    }
    printf("Do you want continue with the result? (y/n): ");
    char choice;
    scanf(" %c", &choice);
    if (choice == 'y') {
        printf("Enter new number.\n");
        scanf("%d", &b);
    }
    else {
        return 0;
    }
    }
}
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}