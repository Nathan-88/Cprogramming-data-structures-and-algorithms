#include <stdio.h>
char *To_upper(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    return (str);
}
int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = To_upper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}