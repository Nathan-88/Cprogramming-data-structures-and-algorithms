#include <stdio.h>
/**
 * a function that computes the absolute value of an integer.
 */
int _abs(int n)
{
    if (n < 0)
    {
        return (-n);
    }
    else if (n == 0)
    {
        return (0);
    }
    else
        return (n);
}
int main()
{
    int i, j, k;
    k = _abs(98);
    printf("%d", k);
    putchar('\n');
    j = _abs(-678);
    printf("%d", j);
    putchar('\n');
    i = _abs(0);
    printf("%d", i);
    putchar('\n');
    return 0;
}