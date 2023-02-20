#include <stdio.h>
/**
 *  a function that checks for a digit (0 through 9).
 * Prototype: int _isdigit(int c);
 * Returns 1 if c is a digit
 * Returns 0 otherwise
 */
int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}
int main(void)
{
    char c;

    c = '8';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'b';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}