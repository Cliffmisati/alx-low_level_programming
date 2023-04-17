#include "main.h"
/**
 * binary- changes a binary unit to unsigned int
 * @b: This is the string that has the binary number
 *
 * Return: This is the number which is converted
 */
unsigned int binary_to_uint(const char *b);
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[1] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}
