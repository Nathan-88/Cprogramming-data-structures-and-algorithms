#include <stdio.h>
/**
 a function that prints the alphabet, in lowercase, followed by a new line.
*/
void print_alphabet(void);
int main(void)
{
    print_alphabet();
    return (0);
}
void print_alphabet(void){
char i;
for (i = 'a'; i <= 'z'; i++)
    putchar(i);

    putchar('\n');
}
