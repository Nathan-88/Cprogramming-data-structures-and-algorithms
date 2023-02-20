#include <stdio.h>
/**
a program that prints all possible combinations of two two-digit numbers.

The numbers should range from 0 to 99
The two numbers should be separated by a space
All numbers should be printed with two digits. 1 should be printed as 01
The combination of numbers must be separated by comma, followed by a space
The combinations of numbers should be printed in ascending order
00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
You can only use the putchar function 
(every other function (printf, puts, etc…) is forbidden)
*/
int main(void)
{
	int p, q;

	for (p = 0; p <= 98; p++)
	{
		for (q = p + 1; q <= 99; q++)
		{
			putchar((p / 10) + '0');
			putchar((p % 10) + '0');
			putchar(' ');
			putchar((q / 10) + '0');
			putchar((q % 10) + '0');

			if (p == 98 && q == 99)
			continue;
				putchar(',');
				putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}