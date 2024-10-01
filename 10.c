Write a C programming to print Fibonacci series using for loop

#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d:\n", n);

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        if (next > n) {
            break;
        }
        printf("%d ", next);
    }

    printf("\n");

    return 0;
}

Input:
Enter a positive integer: 120

Output:
Fibonacci Series up to 120:
0 1 1 2 3 5 8 13 21 34 55 89
