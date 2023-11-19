// Program to shift a number 3 bits left and display result
#include <stdio.h>

void main()
{
    int a, b;

    printf("Enter the number:-");
    scanf("%d", &b);
    // Left shift 3 bits
    a = b << 3;

    printf("\na=%d", a);
}