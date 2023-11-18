// Program to swap two numbers
#include <stdio.h>

// Main function
void main()
{
    // Declare variables
    int num1, num2;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display the original numbers
    printf("Original numbers: First = %d, Second = %d\n", num1, num2);

    // Call the swap function
    int temp = num1;
    num1 = num2;
    num2 = temp;

    // Display the swapped numbers
    printf("Swapped numbers: First = %d, Second = %d\n", num1, num2);
}
