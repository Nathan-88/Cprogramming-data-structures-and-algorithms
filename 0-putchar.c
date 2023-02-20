#include <stdio.h>
void main(){
char *p = "_putchar";
int i = 0;
// while(*p){
//     putchar(*p);
//     // i++;
//     p++;
// }
for (;p[i] != '\0'; i++ )
     putchar(p[i]);
}

