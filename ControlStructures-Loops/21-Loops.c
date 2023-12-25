/*/*We have to print the following pattern:
    1 2 3 4 5 5 4 3 2 1
   1 2 3 4 * * 4 3 2 1
   1 2 3 * * * * 3 2 1
   1 2 * * * * * * 2 1
   1 * * * * * * * * 1
*/

#include <stdio.h>

int main()
{
    int n;

    // Input the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop to iterate through each row
    for (int i = 0; i < n; i++)
    {

        // Loop to print the numbers before '*'
        for (int j = 1; j <= n - i; j++)
        {
            printf("%d ", j);
        }

        // Loop to print '*'
        for (int k = 0; k < 2 * i; k++)
        {
            printf("* ");
        }

        // Loop to print the numbers after '*'
        for (int l = n - i; l >= 1; l--)
        {
            if (l != n) // To avoid printing the last number twice in the middle row
                printf("%d ", l);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
