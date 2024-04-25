#include <stdio.h>

int main() {
    int marks[5];
    int totalMarks = 0;
    float percentage;

    // Prompt the user to enter marks for each subject
    printf("Enter marks for 5 subjects (out of 100):\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        
        // Validate marks to ensure they are within the range 0-100
        while (marks[i] < 0 || marks[i] > 100) {
            printf("Marks should be between 0 and 100. Please enter again: ");
            scanf("%d", &marks[i]);
        }

        totalMarks += marks[i];
    }

    // Calculate percentage
    percentage = (float)totalMarks / 5;

    // Display total marks and percentage
    printf("\nTotal marks: %d\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
} 
