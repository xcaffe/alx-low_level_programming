#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int b = 1;
	char *c = (char *) &b;

	return (*c);
}
