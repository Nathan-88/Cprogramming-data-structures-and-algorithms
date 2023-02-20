#include <stdio.h>
/**
 *  a function that prints the last digit of a number
 */
int print_last_digit(int);
int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    putchar(r + '0');
    putchar('\n');
    return (0);
}
int print_last_digit(int a)
{
    int b = a % 10;
    if (a < 0)
    {
        b = b * -1;
    }
    putchar(b + '0');
    return (b);
}
