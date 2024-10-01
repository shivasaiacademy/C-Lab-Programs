Write a program to perform arithmetic statements using switch statement.

#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator. Please use +, -, *, or /.\n");
            break;
    }

    return 0;
}

Input:

Enter the first number: 8
Enter the second number: 4
Enter an operator (+, -, *, /): *

Output:

Result: 8.00 * 4.00 = 32.00
