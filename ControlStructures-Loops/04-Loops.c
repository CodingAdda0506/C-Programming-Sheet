// Write a program to display the first N odd numbers
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter value of N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2)
    {
        printf("%d\n", i);
    }
}