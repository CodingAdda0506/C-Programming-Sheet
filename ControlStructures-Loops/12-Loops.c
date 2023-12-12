// Write a program to calculate the value of the following series.
// V = u + ½ at^2
#include <stdio.h>

int main()
{
    double u, a, t, v;

    // Input initial velocity, acceleration, and time
    printf("Enter the initial velocity (u): ");
    scanf("%lf", &u);

    printf("Enter the acceleration (a): ");
    scanf("%lf", &a);

    printf("Enter the time (t): ");
    scanf("%lf", &t);

    // Calculate displacement using the formula V = u + 0.5 * a * t^2
    v = u + 0.5 * a * t * t;

    // Display the result
    printf("The displacement (V) is: %lf\n", v);

    return 0;
}
