#include <stdio.h>
/**
 *a function that prints multiples of 9
 */
void times_table(void)
{
    int i, j, product;
    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            product = i * j;
            printf("%d", product);
            if (j < 9)
            {
                putchar(',');
                putchar(' ');
            }
        }
        putchar('\n');
    }
}
int main(void)
{
    times_table();
    return (0);
}