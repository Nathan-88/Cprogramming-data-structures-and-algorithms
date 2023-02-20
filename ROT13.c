#include <stdio.h>
#include <ctype.h>

void rot13(char *str)
{
    while (*str)
    {
        if (isalpha(*str))
        {
            *str = toupper(*str);
            *str = ((*str - 'A' + 13) % 26) + 'A';
        }
        str++;
    }
}

int main()
{
    char str[] = "UBJ NER LBH CERCNEVAT SBE CLGUBA, JR UNIR SRJ QNLF GB TB!";
    rot13(str);
    printf("%s\n", str);
    return 0;
}