#include "main.h"
/**
 * flip_bits - flip to get from one number
 * @n: first number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, cont = 0;
	unsigned long int num;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		num = exclusive >> a;
		if (num & 1)
			cont++;
	}
	return (cont);
}
