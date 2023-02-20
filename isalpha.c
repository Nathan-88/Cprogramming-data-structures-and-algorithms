#include <stdio.h>
/**
 *  a function that checks for alphabetic character
*/
int _isalpha(int c){
    if (c >= 65 && c <= 122)return(1);
        else 
        return(0);
}
int main(void)
{
    int r;

    r = _isalpha('H');
    putchar(r + '0');
    r = _isalpha('o');
    putchar(r + '0');
    r = _isalpha(108);
    putchar(r + '0');
    r = _isalpha(';');
    putchar(r + '0');
    putchar('\n');
    return (0);
}