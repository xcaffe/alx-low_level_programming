#include "main.h"
/**
 * get_bit - value of a bit
 * @n: search number
 * @index: starting from 0 of the bit you want to get
 * Return: the value of the bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > 63)
		return (-1);
	b = (n >> index) & 1;
	return (b);
}
