#include <stdio.h>
#include <string.h>
/**
 * Write a function that gets the length of a prefix substring.
 * Prototype: unsigned int _strspn(char *s, char *accept);
 * Returns the number of bytes in the initial segment of s which consist only of bytes from
 * accept
 *  If the first character in *s is not in *accept, the function returns zero
 */
unsigned int _strspn(char *s, char *accept)
{
    int i, j, len = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; j < strlen(accept); j++)
        {
            if (s[i] == accept[j])
            {
                len++;
                break;
            }
        }
        if (accept[j] == '\0')
        {
            break;
        }
    }
    // int len = strspn(s, accept);
    return (len);
}
int main(void)
{
    char *s = "Hello, world!";
    char *f = "Hell";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}