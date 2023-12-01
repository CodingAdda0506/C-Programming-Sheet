// Write a program to display the factorial of a number

// Factorial is product of all positive descending integers.
#include <stdio.h>
#include <conio.h>
void main()
{
    // Initialise factorial to 1
    int num, fact = 1;
    printf("Enter a number: ");
    // Take the input
    scanf("%d", &num);
    // Iterate from 1 to the input number
    for (int i = 1; i <= num; i++)
    {
        // Factorial Logic
        fact = fact * i;
    }
    printf("Factorial of %d is %d. ", num, fact);
}