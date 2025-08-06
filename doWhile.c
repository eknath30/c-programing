#include <stdio.h>

int main() {
    int count = 0;

    do {
        printf(" %d\n", count);
        count++;
    } while (count < 10); 

    printf(" %d\n", count);
    printf("DONE WITH DO WHILE LOOP");

    return 0;
}