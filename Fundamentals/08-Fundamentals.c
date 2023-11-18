// Program to find the area of a circle
#include <stdio.h>

void main()
{
    // Declare variables
    int radius;
    float area;

    // Input radius from the user
    printf("Enter Radius: ");
    scanf("%d", &radius);

    // Calculate the area using the formula A = π * r * r
    // Note: Using an approximation of pi (3.14)
    area = 3.14 * radius * radius;

    // Display the calculated area
    printf("Area of circle: %f", area);
}
