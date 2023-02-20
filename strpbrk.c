#include <stdio.h>
#include <string.h>
/**
 * Prototype: char *_strpbrk(char *s, char *accept);
 * The _strpbrk() function locates the first occurrence in the string s of any of the bytes in
 * the string accept
 * Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no
 * such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
    // while (*s != '\0')
    // {
    //     char *p = accept;
    //     while (*p != '\0')
    //     {
    //         if (*s == *p)
    //         {
    //             return s;
    //         }
    //         p++;
    //     }
    //     s++;
    // }
    // return NULL;
    return (strpbrk(s, accept));
}
void main()
{
    char *s = "Hello, world!";
    char *accept = "lw";
    char *ptr = _strpbrk(s, accept);
    if (ptr)
    {
        printf("First occurrence of character from accept: %c\n", *ptr);
    }
    else
    {
        printf("No characters from accept found in string\n");
    }
}