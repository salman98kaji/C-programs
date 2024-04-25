#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, area, circumference;

    // Prompt the user to enter the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Compute area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Display the results
    printf("The area of the circle is: %.2f\n", area);
    printf("The circumference of the circle is: %.2f\n", circumference);

    return 0;
}
