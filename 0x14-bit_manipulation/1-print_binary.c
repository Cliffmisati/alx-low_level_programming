#include "main.h"

/**
 *print_binary - prints a binary number that is same as the decimal number
 *@n: This represents the number that is printed in binary
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> 1;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar(0);
	}
	if (!count)
		_putchar('0');
}
