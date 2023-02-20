#include <stdio.h>
/**
 * write a program that prints numbers from 1 -10 in such a way that when the number is odd,
 * add 1 and when the number is even subtract  1
 */
int main()
{
    int i, j;
    for (i = 1; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            i += 1;
            printf("%d ", i);
            i -= 1;
        }
        if (i % 2 == 0)
        {
            i -= 1;
            printf("%d ", i);
            i += 1;
        }
    }
    return 0;
}