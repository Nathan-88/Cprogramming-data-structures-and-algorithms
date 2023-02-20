#include <stdio.h>
/**
 *  a function that prints half of a string, followed by a new line.
 * Prototype: void puts_half(char *str);
 * The function should print the second half of the string
 * If the number of characters is odd, the function should print the last n characters of the
 * string,
 *  where n = (length_of_the_string - 1) / 2
 */
void puts_half(char *str)
{
    int len, n;
    while (str[len] != '\0')
    {
        len++;
    }
    printf("%d\n", len);
    if (n % 2 != 0)
    {
        n = (len - 1) / 2;
    }
    else
        n = len / 2;

    for (int i = n; str[i] != '\0'; i++)
    {
        putchar(str[i]);
    }
}
int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}