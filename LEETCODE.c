#include <stdio.h>
char *leet(char *c)
{
    char uppCase[] = {'A', 'E', 'O', 'T', 'L'};
    char lowCase[] = {'a', 'e', 'o', 't', 'l'};
    char leetNum[] = {'4', '3', '0', '7', '1'};

    int i, j;

    for (i = 0; c[i] != '\0'; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (c[i] == uppCase[j] || c[i] == lowCase[j])
            {
                c[i] = leetNum[j];
                break;
            }
        }
    }
    return (c);
}
int main(void)
{
    char s[] = "FOR PYTHON WHEN WE REACH THAT BRIDGE WE WILL CROSS.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}