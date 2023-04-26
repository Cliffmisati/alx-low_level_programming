#include "main.h"

/**
 * get_endianness - This will check if a machine is big endian or little machine
 * Return: 0 for big machine and  1 for little machine
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

