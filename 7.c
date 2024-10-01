Write a program to print the following patter using for loop
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

Output:
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
