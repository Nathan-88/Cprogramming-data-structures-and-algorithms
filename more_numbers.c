#include <stdio.h>
/**
 *  a function that prints 10 times the numbers, from 0 to 14, followed by a new line.
 */
void more_numbers(void)
{
    int i, j;
    for (i = 0; i <= 10; i++)
    {
        for (j = 0; j <= 14; j++)
        {
            if (j >= 10)
            {
                putchar(j / 10 + '0');
            }
            putchar(j % 10 + '0');
            if (j < 14)
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
    more_numbers();
    return (0);
}