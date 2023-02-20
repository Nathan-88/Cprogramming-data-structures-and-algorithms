#include <stdio.h>
#include <stdlib.h>
/**
 *   a function that prints the n times table, starting with 0.
 * If n is greater than 15 or less than 0 the function should not print anything
 */
void print_times_table(int n);
int main(void)
{
    print_times_table(3);
    putchar('\n');
    print_times_table(5);
    putchar('\n');
    print_times_table(98);
    putchar('\n');
    print_times_table(12);
    return (0);
}
void print_times_table(int n)
{
    int product, i, j;
    if (n > 15 || n < 0)
    {
        exit;
    }
    else
    {
        for (i = 0; i <= n; i++)
        {
            for (j = 0; j <= n; j++)
            {
                product = i * j;
                printf("%d", product);
                if (j < n)
                    printf(", ");
            }
            printf("\n");
        }
    }
}