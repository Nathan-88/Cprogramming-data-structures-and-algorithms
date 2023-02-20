#include <stdio.h>
/**
 *  a function that prints 10 times the alphabet, in lowercase, followed by a new line.
*/
void print_alphabet_x10(void){
char i;
for (int num = 0; num <= 10; num++){
    for(i = 'a'; i < 'z'; i++){
        putchar(i);
    }
    putchar('\n');
}
}
int main(void)
{
   print_alphabet_x10();
    return (0);
}
