#include <stdio.h>
/**
 * a function that prints a string, followed by a new line.
 * Prototype: void _puts_recursion(char *s);
 */
void _puts_recursion(char *s)
{
    int i = 0;
    if (*s == '\0')
    {

        return;
    }
    else
    {
        putchar(s[i]);
        return (_puts_recursion(s + 1));
    }
}
int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}