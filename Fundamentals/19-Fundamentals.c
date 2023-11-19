// Program to find roots of a quadratic equation
#include <math.h>
#include <stdio.h>

int main()
{
    // Declare variables for coefficients and roots
    double a, b, c, discriminant, root1, root2, realPart, imagPart;

    // Prompt user to enter coefficients
    printf("Enter coefficients a, b and c: ");

    // Read coefficients from user input
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check the nature of roots based on the discriminant
    if (discriminant > 0)
    {
        // Calculate and print real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }
    else if (discriminant == 0)
    {
        // Calculate and print real and equal roots
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }
    else
    {
        // Calculate and print complex roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    // Indicate successful execution
    return 0;
}
