// Write a program to calculate the value of the following series.
// 1 + ½ + ⅓ + ¼ + … + 1/n
#include <stdio.h>

int main()
{
    int n;
    float sum = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / (float)i;
    }

    printf("Sum of values of the given series is %f\n", sum);

    return 0;
}
