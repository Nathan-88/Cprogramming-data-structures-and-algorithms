#include <stdio.h>
// A programe that prints letters in lowercase then in uppercase
void main(){
    char i;
    for (i = 'a';i <= 'z';i++)
    {
        putchar(i);
    }
     for (i = 'A';i <= 'Z';i++)
    {
        putchar(i);
    }
    putchar('\n');
}
