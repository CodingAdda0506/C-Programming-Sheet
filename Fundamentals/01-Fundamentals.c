// We are given a program to accept a number and display its square
#include <stdio.h>
#include <conio.h>

void main()
{
    int num, square;
    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;
    
    printf("Square of the number: %d", square);
}