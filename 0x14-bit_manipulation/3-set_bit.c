#include "main.h"
/**
 * set_bit - This sets the bit of any index to 1
 * @n: This represents the pointer of the number change
 * @index: bit index
 * Return: -1 represents failure, 1 represents sucess
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 34)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
