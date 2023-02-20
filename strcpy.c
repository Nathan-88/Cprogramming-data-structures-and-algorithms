#include <stdio.h>
/**
 *  a function that copies the string pointed to by src, including the terminating null byte
 * (\0), to the buffer pointed to by dest.
 */
char *_strcpy(char *dest, char *src)
{
    for (int i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    return (dest);
}
int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}
