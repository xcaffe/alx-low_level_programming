#include "main.h"
/**
 * flip_bits - number of bits you would need to flip
 * @n: first number
 * @m: second number
 * Return: number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int number;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		number = exclusive >> a;
		if (number & 1)
			count++;
	}
	return (count);
}
