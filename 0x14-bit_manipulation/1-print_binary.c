#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number of binary
 */
void print_binary(unsigned long int n)
{
	int a, count = 0;
	unsigned long int number;

	for (a = 63; a >= 0; a--)
	{
		number = n >> a;

		if (number & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
