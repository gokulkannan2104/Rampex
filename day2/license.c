#include <stdio.h>

int main() {
    int age;

    // Ask the user for their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check eligibility
    if (age >= 18) {
        printf("You are eligible for a driving license.\n");
    } else {
        printf("You are not eligible for a driving license. You must be at least 18 years old.\n");
    }

    return 0;
}
