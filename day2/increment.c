#include <stdio.h>

int main() {
    int number = 10;

    // Increment operator
    printf("Initial value: %d\n", number);
    number++; // Post-increment
    printf("After post-increment: %d\n", number);
    ++number; // Pre-increment
    printf("After pre-increment: %d\n", number);

    // Decrement operator
    number--; // Post-decrement
    printf("After post-decrement: %d\n", number);
    --number; // Pre-decrement
    printf("After pre-decrement: %d\n", number);

    return 0;
}