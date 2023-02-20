#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
this program will assign random numbers to the variable n each time its executed
*/
int main(void)
{
	int n;

	srand(time(NULL));
	n = rand() - RAND_MAX / 2;//or just rand()
	if (n > 0){
	printf("%d is positive", n);}
	else if (n == 0){
	printf("%d is zero");
	}
	else
	printf("%d is negative");
   
}

