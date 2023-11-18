// Program to accept 3 numbers and display its average
#include <stdio.h>

void main()
{
    int num1, num2, num3;
    float average;

    printf("Enter Number 1: ");
    scanf("%d", &num1);
    printf("Enter Number 2: ");
    scanf("%d", &num2);
    printf("Enter Number 3: ");
    scanf("%d", &num3);

    average = (num1 + num2 + num3) / 3;

    printf("Average: %f", average);
}