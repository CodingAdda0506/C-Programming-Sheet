// Program to accpet 2 numbers from user and display the greatest using a conditional operator
#include <stdio.h>

void main()
{
    int num1, num2;

    // Take input of the numbers
    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    // Conditional Operators
    if (num1 > num2)
    {
        printf("%d is Greater", num1);
    } else {
    printf("%d is Greater", num2);
    }
}