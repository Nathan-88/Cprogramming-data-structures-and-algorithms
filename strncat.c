#include <stdio.h>
/**
 *  a function that concatenates two strings.
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 */
char *_strncat(char *dest, char *src, int n)
{
    int len, i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }

    for (len = 0; len < n; len++)
    {
        dest[i++] = src[len];
        if (src[len] == '\0')
        {
            break;
        }
    }
    dest[i] = '\0';
    return (dest);
}
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}