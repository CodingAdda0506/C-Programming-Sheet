// Program to display the reversed form of a two-digit number
#include <stdio.h>

int main()
{
    int number;

    // Input a two-digit number
    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    // Check if the number is a two-digit number
    if (number >= 10 && number <= 99)
    {
        // Extract the digits
        int tensDigit = number / 10;
        int onesDigit = number % 10;

        // Display the reversed form
        printf("Reversed Form: %d%d\n", onesDigit, tensDigit);
    }
    else
    {
        // If the input is not a two-digit number
        printf("Please enter a valid two-digit number.\n");
    }

}
