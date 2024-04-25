#include <stdio.h>

int main() {
    char ch;

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Display the ASCII value of the character
    printf("ASCII value of %c is %d\n", ch, ch);

    return 0;
}
