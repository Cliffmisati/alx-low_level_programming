#include "main.h"
/**
 *flip_bits - This will count the bits required for change
 *@n: This represents the first number
 *@m: represents second number
 *Return: no of bits required to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
	current = exclusive >> i;
	if (current & 1)
		count++;
	}
	
	return (count);
}
