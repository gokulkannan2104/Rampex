#include <stdio.h>

int main() {
    int i, j;
    
    // Outer loop for rows
    for (i = 1; i <= 10; i++) {
        // Inner loop for columns
        for (j = 1; j <= 10; j++) {
            printf("%d\t", i * j);  // Printing the multiplication result
        }
        printf("\n");  // New line after each row
    }
    
    return 0;
}

