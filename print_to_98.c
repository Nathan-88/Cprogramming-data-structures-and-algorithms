#include <stdio.h>
/**
 *a function that prints all natural numbers from n to 98, followed by a new line.
 */
void print_to_98(int n);
int main(void)
{
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return (0);
}
void print_to_98(int n)
{
    int i;
    if (n <= 98)
    {
        for (i = n; n <= 98; n++)
        {
            printf("%d", n);
            if (n != 98)
                printf(", ");
        }
    }
    else if (n >= 98)
    {
        for (i = n; n >= 98; n--)
        {
            printf("%d", n);
            if (n != 98)
                printf(", ");
        }
    }
    printf("\n");
}
