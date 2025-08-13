#include <stdio.h>

int main() {
    int i, n, number;

    printf("How many numbers do you want to check? ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number % 2 == 0) {
            printf("%d is Even.\n", number);
        } else {
            printf("%d is Odd.\n", number);
        }
    }

    return 0;
}
