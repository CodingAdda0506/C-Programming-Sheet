// Program to separate digits of a 3-digit number and display separately
#include <stdio.h>

void main()
{
    int number;

    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    // Separate digits
    int hundreds, tens, ones;

    // Extract hundreds place digit
    hundreds = number / 100;

    // Extract tens place digit (remainder when divided by 100, then divide by 10)
    tens = (number % 100) / 10;

    // Extract ones place digit (remainder when divided by 10)
    ones = number % 10;

    // Display separated digits
    printf("Number at \nHundreds: %d, \nTens: %d, \nOnes: %d", hundreds, tens, ones);
}
