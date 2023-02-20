#include <stdio.h>
/**
 *a function that draws a straight line in the terminal.

Prototype: void print_line(int n);
You can only use putchar function to print
Where n is the number of times the character _ should be printed
The line should end with a \n
If n is 0 or less, the function should only print \n
 */
void print_line(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        if (n == 0 || n < 0)
        {
            putchar('\n');
        }
        else
            putchar('_');
    }
    putchar('\n');
}
int main(void)
{
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    return (0);
}