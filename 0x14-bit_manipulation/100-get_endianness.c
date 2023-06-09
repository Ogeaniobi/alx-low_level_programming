#include "main.h"

/**
 * get_endianness - This  checks if a machine is little or big endian
 * Return: 0 stands for big and 1 stands for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
