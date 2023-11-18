// We are given a program to accept a number and display its square
#include <stdio.h>
#include <conio.h> // This header is used for console I/O, but it's non-standard. Consider using alternatives for portability.

void main()
{
    int num, square;
    printf("Enter a number: ");
    scanf("%d", &num); // Taking input from the user and storing it in the 'num' variable.

    square = num * num; // Calculating the square of the input number and storing it in the 'square' variable.

    printf("Square of the number: %d", square); // Displaying the square of the entered number.
}
