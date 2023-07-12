#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number, or 0 if b is NULL or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int c;
	unsigned int convert = 0;

	if (!b)
		return (0);
	for (c = 0; b[c]; c++)
	{
		if (b[c] < '0' || b[c] > '1')
			return (0);
		convert = 2 * convert + (b[c] - '0');
	}
	return (convert);
}

