// #include <stdio.h>
// int main()
// {
//     int i, space, rows, k = 0;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for (i = 1; i <= rows; ++i, k = 0)
//     {
//         for (space = 1; space <= rows - i; ++space)
//         {
//             printf("  ");
//         }
//         while (k != 2 * i - 1)
//         {
//             printf("* ");
//             ++k;
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>

int main()
{
    int rows, i, j;

    // Determine the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Iterate through the rows
    for (i = 1; i <= rows; i++)
    {
        // Iterate through the columns
        for (j = 1; j <= rows; j++)
        {
            // Print a star if the current column is less than or equal to the current row
            if (j <= i)
            {
                printf("*");
            }
            // Otherwise, print a space
            else
            {
                printf(" ");
            }
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}