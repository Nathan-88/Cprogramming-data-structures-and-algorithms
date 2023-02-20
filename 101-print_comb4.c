#include <stdio.h>
/**
A program that prints all possible different combinations of three digits.

Numbers must be separated by ,, followed by a space
The three digits must be different
012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
Print only the smallest combination of three digits
Numbers should be printed in ascending order, with three digits
*/


int main(){
    int i, j,k;
    for (i = 0; i <= 9; i++){
        for (j =i+1; j <=9; j++){
        for(k = j+ 1; k <= 9; k++ ){
        if(i < j < k){
        putchar(i+ '0');
        putchar(j + '0');
        putchar(k + '0');
        if(i < 7){
        putchar(',');
        putchar(' ');
        }
        else
            continue;
        }
        }
        }
    }
}