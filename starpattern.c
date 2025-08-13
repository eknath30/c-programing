#include <stdio.h>
int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) { // Outer loop for rows
        for (int j = 1; j <= i; j++) { // Inner loop for columns
            printf("* ");
        }
        printf("\n"); // Move to the next row
    }
    return 0;
}