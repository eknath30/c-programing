#include <stdio.h>

int main() {
    int n, factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (n == 0) {
        printf("Factorial of 0 is 1.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i; // Multiply factorial by each number from 1 to n
        }
        printf("Factorial of %d is %d\n", n, factorial);
    }

    return 0;
}
