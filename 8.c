Write a C program to print sum of natural number using while loop

#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    printf("Enter a natural number: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;  // Add i to sum
        i++;       // Increment i
    }

    printf("The sum of natural numbers up to %d is: %d\n", n, sum);

    return 0;
}
