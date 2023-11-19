// Program to check if entered number is even or odd

#include <stdio.h>

void main()
{

    // Take input
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Condition to check odd and even
    if (num % 2 == 0)
    {
        printf("%d is Even", num);
    }
    else
    {
        printf("%d is Odd", num);
    }
}