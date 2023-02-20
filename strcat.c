#include <stdio.h>
/**
 * a function that concatenates two strings.
 */
char *_strcat(char *dest, char *src)
{
    int len;
    while (src[len] != '\0')
    {
        len++;
    }
    int i;
    while (dest[i] != '\0')
    {
        i++;
    }
    int num = i + len;
    printf("%d\n", i);
    for (len = 0; src[len] != '\0'; len++)
    {
        dest[i++] = src[len];
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
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}