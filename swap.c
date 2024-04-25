#include <stdio.h>

int main() {
    int num1, num2, temp;

    // Accept two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Method 1: Using a third variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nAfter swapping (using third variable):\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    // Method 2: Using arithmetic operations
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("\nAfter swapping (using arithmetic operations):\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}
