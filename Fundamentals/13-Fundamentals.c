// Program to accpet 3 numbers from user and display the greatest using a conditional operator
#include <stdio.h>

void main()
{
    int num1, num2, num3, greatest;

    // Take input of the numbers
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Conditional Operator
    greatest = (num1>num2 && num1 > num3 ? num1: num2>num3?num2:num3);

    printf("%d is the greatest", greatest);
    
}