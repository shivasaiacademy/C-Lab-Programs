Write a program to find the biggest of three numbers

#include <stdio.h>

int main() {
    int num1, num2, num3, largest;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    printf("The largest number is: %d\n", largest);

    return 0;
}

Input:
Enter the first number: 8
Enter the second number: 55
Enter the third number: 7

Output:
The largest number is: 55
