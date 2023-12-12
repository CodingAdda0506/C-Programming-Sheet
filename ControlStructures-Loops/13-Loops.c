// Write a program to display the square, cube , fourth power, … nth power of x, where x is an integer taken from the user.
#include <stdio.h>

int main()
{
    int x, n;

    // Input the base integer (x)
    printf("Enter an integer (x): ");
    scanf("%d", &x);

    // Input the power (n)
    printf("Enter the power (n): ");
    scanf("%d", &n);

    // Display the square, cube, fourth power, ..., nth power
    printf("Powers of %d up to %d:\n", x, n);
    for (int i = 2; i <= n; i++)
    {
        printf("%d^%d = %d\n", x, i, (int)pow(x, i));
    }

    return 0;
}
