#include <stdio.h>
/**
 *  a function that prints a string, in reverse, followed by a new line
 */
void print_rev(char *s)
{
    int len;
    while (s[len] != '\0')
    {
        len++;
    }
    // for (len = 0; s[len] != '\0'; len++)
    // {
    //     ;
    // }

    printf("%d\n", len);
    for (int i = len; i >= 0; i--)
    {
        putchar(s[i]);
    }
}

int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";

    print_rev(str);
    return (0);
}