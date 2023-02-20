#include <stdio.h>
/**
 * a function that prints an integer.
 * Prototype: void print_number(int n);
 * You can only use _putchar function to print
 * You are not allowed to use long
 * You are not allowed to use arrays or pointers
 * You are not allowed to hard-code special values
 */
void print_number(int n)
{
    if (n >= '0' && n <= '9')
    {
        putchar(n + '0');
    }
    else if ((n / 10) < 10)
    {
        putchar(n / 10 + '0');
        putchar(n % 10 + '0');
    }
}
int main(void)
{
    print_number(98);
    putchar('\n');
    print_number(402);
    putchar('\n');
    print_number(1024);
    putchar('\n');
    print_number(0);
    putchar('\n');
    print_number(-98);
    putchar('\n');
    return (0);
}