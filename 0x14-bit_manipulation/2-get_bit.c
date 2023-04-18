#include "main.h"
/**
 * get_bit - This will return the bit value at an index in decimal number
 * @n: shows the number search
 * @index: shows the bit index
 *Return: Shows value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 34)
		return (-1);
	bit_val = (n >> index) & 1;
	return (bit_val);
}
