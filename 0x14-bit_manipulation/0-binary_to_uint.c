#include "main.h"
/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: points to a string of chars
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int con = 0;

	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		con = 2 * con + (b[a] - '0');
	}
	return (con);
}
