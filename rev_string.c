#include <stdio.h>
#include <string.h>
/**
 * a function that reverses a string (char array).
 */
void rev_string(char *s)
{
    strrev(s);
}
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}