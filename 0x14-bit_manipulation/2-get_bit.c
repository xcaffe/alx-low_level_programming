#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: search number
 * @index: index, starting from 0 of the bit you want to get
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int a;

	if (index > 63)
		return (-1);
	a = (n >> index) & 1;
	return (a);
}
