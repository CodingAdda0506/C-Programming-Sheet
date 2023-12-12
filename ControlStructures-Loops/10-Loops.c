// Write a program to calculate the value of the following series.
// 1 + ½! + ⅓! + ¼! + .. + 1/n!
#include <stdio.h>

// Function to calculate the factorial of a number
double factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}

int main()
{
    int n;
    double sum = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / factorial(i);
    }

    printf("Sum of values of the given series is %lf\n", sum);

    return 0;
}
