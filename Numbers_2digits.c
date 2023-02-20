#include <stdio.h>
/**
Write a program that prints all possible different combinations of two digits.
*/
int main()
{
    int i, j;
    for (i = 0; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (i < j)
            {
                putchar(i + '0');
                putchar(j + '0');
                if (i < 8)
                {
                    putchar(',');
                    putchar(' ');
                }
                else
                    continue;
            }
        }
    }
}