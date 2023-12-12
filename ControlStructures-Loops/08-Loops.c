// Write a program to display first N elements of Fibonacci series.
// Fibonacci series is a series which starts from 0 1 and then the next number is the sum of its 2 predecessors. For eg 0 1 1(0+1) 2(1+1) 3(1+2) 5(2+3)
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, c;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int a = 0;
    int b = 1;

    printf("First %d elements of Fibonacci series are:\n", n);
    printf("%d %d ", a, b);

    for (int i = 2; i < n; i++)
    {
        int c = a + b;
        printf("%d ", c);

        // Update values for the next iteration
        a = b;
        b = c;
    }
}