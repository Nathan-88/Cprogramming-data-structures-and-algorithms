#include <stdio.h>
// #include <string.h>

void *my_memset(void *dest, int c, size_t n)
{
    unsigned char *p = dest;
    for (size_t i = 0; i < n; i++)
    {
        p[i] = c;
    }
    return dest;
}

int main(int argc, char **argv)
{
    char buffer[10];
    my_memset(buffer, 'x', sizeof(buffer));
    printf("%s\n", buffer); // prints "xxxxxxxxxx"
    return 0;
}