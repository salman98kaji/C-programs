#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    // Continuously accept numbers until a non-positive number is entered
    while (1) {
        printf("Enter a positive number (enter a non-positive number to stop): ");
        scanf("%d", &num);

        // Check if the number is positive
        if (num > 0) {
            sum += num; // Add the positive number to the sum
        } else {
            break; // Exit the loop if a non-positive number is entered
        }
    }

    printf("Sum of the given positive numbers: %d\n", sum);

    return 0;
}
