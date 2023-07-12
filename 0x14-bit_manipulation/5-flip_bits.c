#include "main.h"
/**
 * flip_bits - flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b, count = 0;
	unsigned long int number;
	unsigned long int exclusive = n ^ m;

	for (b = 63; b >= 0; b--)
	{
		number = exclusive >> b;
		if (number & 1)
			count++;
	}
	return (count);
}
