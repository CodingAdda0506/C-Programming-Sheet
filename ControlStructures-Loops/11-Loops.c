// Write a program to calculate the value of the following series.
// Sin x = x - x^3/3! + x^5/5! - x^7/7! + .. + x^n/n!
#include <stdio.h>
#include <math.h>

// Function to calculate the factorial of a number
double factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1.0;
    }
    else
    {
        return num * factorial(num - 1);
    }
}

int main()
{
    double x, sum = 0.0;
    int n;

    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        double term = pow(-1, i) * pow(x, 2 * i + 1) / factorial(2 * i + 1);
        sum += term;
    }

    printf("Sin(%lf) is approximately: %lf\n", x, sum);

    return 0;
}
