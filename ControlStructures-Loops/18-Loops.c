/*We have to print the following pattern:
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/

#include <stdio.h>

int main()
{
    int rows, i, j, space;

    // Get the number of rows from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print the upper part of the pattern
    for (i = 1; i <= rows; i++)
    {
        // Print spaces
        for (space = i; space < rows; space++)
            printf("  ");

        // Print '*' characters
        for (j = 1; j <= 2 * i - 1; j++)
            printf("* ");

        printf("\n");
    }

    // Print the lower part of the pattern
    for (i = rows - 1; i >= 1; i--)
    {
        // Print spaces
        for (space = rows; space > i; space--)
            printf("  ");

        // Print '*' characters
        for (j = 1; j <= 2 * i - 1; j++)
            printf("* ");

        printf("\n");
    }

    return 0;
}
