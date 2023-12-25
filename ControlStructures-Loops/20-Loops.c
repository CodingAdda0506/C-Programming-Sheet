/*We have to print the following pattern:
        1
       121
      12321
     1234321
    123454321
   12345654321
*/
       
#include <stdio.h>

int main()
{
    int n = 6; // You can change this value to control the number of rows in the pattern

    for (int i = 1; i <= n; i++)
    {
        // Print spaces
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Print increasing sequence
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        // Print decreasing sequence
        for (int j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
