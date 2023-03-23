#include "main.h"

/**
 * _abs - absolute value check
 * @c: parameter to print
 * Return: Value c
 */

int _abs(int c)
{
	if (c < 0)
		c = -(c);
	else if (c >= 0)
		c = c;
	return (c);
}
