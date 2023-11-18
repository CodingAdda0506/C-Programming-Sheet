// Program to accept two numbers and display their product
#include <stdio.h>
#include <conio.h> // Note: conio.h is not standard and may not be available on all systems

void main()
{
    // Declare variables to store the numbers and their product
    int num1, num2, product;

    // Prompt the user to enter the first number
    printf("Enter Number 1: ");

    // Read the first number from the user
    scanf("%d", &num1);

    // Prompt the user to enter the second number
    printf("Enter Number 2: ");

    // Read the second number from the user
    scanf("%d", &num2);

    // Calculate the product of the two numbers
    product = num1 * num2;

    // Display the product to the user
    printf("Product: %d", product);

    // Note: The main() function should return an integer, so you might want to use "int main()" instead of "void main()"
}
