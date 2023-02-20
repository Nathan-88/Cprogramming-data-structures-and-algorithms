#include <stdio.h>
/**
 * a function that prints every other character of a string, starting with the first character
 * followed by a new line.
 */
void puts2(char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        putchar(s[i]);
        i += 2;
    }
    //     for (; s[i] != '\0'; i += 2)
    //     {
    //         putchar(s[i]);
    //     }
    // }
    int main(void)
    {
        char *str;

        str = "0526456789";
        puts2(str);
        return (0);
    }