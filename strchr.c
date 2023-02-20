#include <stdio.h>
#include <stdlib.h>
/**
 * Write a function that locates a character in a string.
 * Prototype: char *_strchr(char *s, char c);
 * Returns a pointer to the first occurrence of the character c in the string s,
 *  or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            for (; s[i] != '\0'; i++)
            {
                // putchar(s[i]);
                return (s + i);
            }
            exit(1);
        }
    }
    // return (NULL);
}

int main(void)
{
    char *s = "helhuo";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}