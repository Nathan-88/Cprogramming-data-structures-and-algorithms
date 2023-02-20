#include <stdio.h>
/**
 * Write a function that capitalizes all words of a string.
 * Prototype: char *cap_string(char *);
 * Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
 */
char *cap_string(char *c)
{
    int i, j;
    char upper[] = {' ',
                    '\n',
                    '\t',
                    ',',
                    ';',
                    '.',
                    '!',
                    '?',
                    '"',
                    '(',
                    ')',
                    '{',
                    '}'};
    for (i = 0; c[i] != '\0'; i++)
    {
        for (j = 0; upper[j] != '\0'; j++)
        {
            if (c[i] == upper[j] && c[i + 1] >= 'a' && c[i + 1] <= 'z')
            {
                c[i + 1] -= 32;
            }
        }
    }
    return (c);
}
int main(void)
{
    char str[] = "Expect the best. prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}