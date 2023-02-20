#include <stdio.h>
/**
Write a program that prints all possible combinations of single-digit numbers.
Numbers must be separated by ,, followed by a space
Numbers should be printed in ascending order
You can only use the putchar function 
(every other function (printf, puts, etc…) is forbidden)
*/
int main(){
    int i;
    for (i = 0; i < 10; i++){
        putchar(i + '0');
        if (i != 9){
        putchar(',');
        putchar(' ');
        }
    }
    return 0;
}