#include <stdio.h>
#include <string.h>
/**
 * Write a function that copies memory area.
 * Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
 * The _memcpy() function copies n bytes from memory area src to memory area dest
 * Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return (dest);
}
void main()
{
    char src[10] = "Hello";
    char dest[10];
    _memcpy(dest, src, strlen(src) + 1);
    printf("Copied string: %s\n", dest);
}