// Write a program to calculate and display sum of first N natural numbers
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    int sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        /* code */
        sum = sum + i;
    }

    printf("Sum of the first %d natural numbers is %d", n, sum);
}