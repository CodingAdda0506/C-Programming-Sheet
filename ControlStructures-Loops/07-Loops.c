// Write a program to calculate and display sum of square of first n natural numbers
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    int sum = 0;
    int square;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        square = i * i;
        sum = sum + square;
    }

    printf("Sum of sqaures of first %d natural numbers is %d", n, sum);
}