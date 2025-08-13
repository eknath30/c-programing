#include <stdio.h>

int main() {
    int num, reversed_num = 0, remainder, original_num;

    // Get input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    original_num = num; // Store the original number

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;          // Get the last digit
        reversed_num = reversed_num * 10 + remainder; // Build the reversed number
        num /= 10;                     // Remove the last digit from the original number
    }

    // Check if the original and reversed numbers are equal
    if (original_num == reversed_num) {
        printf("%d is a palindrome number.\n", original_num);
    } else {
        printf("%d is not a palindrome number.\n", original_num);
    }

    return 0;
}