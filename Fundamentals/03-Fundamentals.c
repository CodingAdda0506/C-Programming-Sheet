// Program to accept a number and find remainder after dividing it with 5 and 7
#include <stdio.h>
#include <conio.h>

// Main function where execution begins
void main()
{
    // Declare variables to store the input number and remainders
    int num;
    int remAfter5, remAfter7;

    // Prompt the user to enter a number
    printf("Enter a Number: ");

    // Read the input number from the user
    scanf("%d", &num);

    // Calculate the remainder after dividing the number by 5 and 7
    remAfter5 = num % 5;
    remAfter7 = num % 7;

    // Display the remainder after dividing by 5
    printf("Remainder After Dividing with 5: %d", remAfter5);

    // Display the remainder after dividing by 7
    printf("\nRemainder After Dividing with 7: %d", remAfter7);
}
