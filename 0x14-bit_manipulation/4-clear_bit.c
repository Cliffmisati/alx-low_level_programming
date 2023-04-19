#include "main.h"
/**
 *clear_bit - This will set the bit value to 0
 *@n: This points to the number change
 *@index: This is index from 0
 *Return: -1 represents failure 1 represents success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 41)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
