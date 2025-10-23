#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {

    printf("ATM Simulation Started..\n");
    printf("Welcome to the ATM!\nPlease write your card number:");
    int cardNumber;
    scanf("%d", &cardNumber);
    if (cardNumber<1000000000000000 && cardNumber>9999999999999999) {
        printf("Invalid card number. Please try again.\n");
        return 0;
    }
    else {
        printf("Please write your password:");
        int password;
        scanf("%d", &password);
        if (password<1000 && password>9999) {
            printf("Invalid password. Please try again.\n");
            return 0;
        }
        else {
            printf("Login successful!\n");
        }
    }
    int balance = 0;
    while (1) {
        printf("Please select an operation:\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n");
    int operation;
    scanf("%d", &operation);
    switch (operation) {
        case 1: {
            printf("Enter amount to deposit:");
            int depositAmount;
            scanf("%d", &depositAmount);
            if (depositAmount <= 0) {
                printf("Invalid amount. Please try again.\n");
            } else {
                balance += depositAmount;
                printf("Deposit successful! New balance: %d\n", balance);
            }
            break;
        }
        case 2: {
            printf("Enter amount to withdraw:");
            int withdrawAmount;
            scanf("%d", &withdrawAmount);
            if (withdrawAmount <= 0 || withdrawAmount > balance) {
                printf("Invalid amount. Please try again.\n");
            } else {
                balance -= withdrawAmount;
                printf("Withdrawal successful! New balance: %d\n", balance);
            }
            break;
        }
        case 3: {
            printf("Your current balance is: %d\n", balance);
            break;
        }
        case 4: {
            printf("Thank you for using the ATM. Goodbye!\n");
            return 0;
            break;
        }
        default: {
            printf("Invalid operation selected. Please try again.\n");
            break;
        }
    }
    }
}
