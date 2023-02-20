#include <stdio.h>
/**
 * a function that draws a diagonal line on the terminal.
 * Prototype: void print_diagonal(int n);
 * You can only use _putchar function to print
 * Where n is the number of times the character \ should be printed
 * The diagonal should end with a \n
 * If n is 0 or less, the function should only print a \n
 */
void print_diagonal(int n)
{
    int i, j;
    if (n <= 0)
    {
        putchar('\n');
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            putchar(' ');
        }
        putchar(92);
        putchar('\n');
    }
}
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}