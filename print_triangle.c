#include <stdio.h>
/**
 * a function that prints a triangle, followed by a new line.
 *Where size is the size of the triangle
  If size is 0 or less, the function should print only a new line
  Use the character # to print the triangle
 */
void print_triangle(int size)
{
    int i, j;
    if (size <= 0)
        putchar('\n');
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (((size - 1) - i) <= j)
            {
                putchar('#');
            }
            else
                putchar('.');
        }
        putchar('\n');
    }
}
int main(void)
{
    // print_triangle(2);
    print_triangle(10);
    // print_triangle(1);
    // print_triangle(0);
    return (0);
}