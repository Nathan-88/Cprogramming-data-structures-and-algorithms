#include <stdio.h>
/**
 *  a function that sets the value of a pointer to a char.
 * Prototype: void set_string(char **s, char *to);
 */
void set_string(char **s, char *to)
{
    *s = to;
}
int main(void)
{
    char *s0 = "Bob Dylan";
    char *s1 = "Robert Allen";

    printf("%s, %s\n", s0, s1);
    set_string(&s1, s0);
    printf("%s, %s\n", s0, s1);
    return (0);
}