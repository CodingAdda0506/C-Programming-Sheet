// Write a program to display the multiplication table of a user entered number
#include <stdio.h>
#include <conio.h>
void main()
{
    int num;
    printf("Enter a number: ");
    // Take the input
    scanf("%d", &num);

    printf("Multiplication Table is as follows:\n ");
    for (int i = 1; i <= 10; i++)
    {
        printf("\n%d x %d = %d\n", num, i, num * i);
    }
}