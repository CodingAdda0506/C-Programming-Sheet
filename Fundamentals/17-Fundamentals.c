// Program to accept a float number and display the integer part using type casting operator
#include <stdio.h>

void main()
{
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    // Type Casting
    printf("Integer Part: %d", (int)num);
}