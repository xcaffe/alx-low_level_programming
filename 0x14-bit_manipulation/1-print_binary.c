#include "main.h"
/**
 * print_binary - prints the binary number
 * @n: number of binary
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	int b, count = 0;
	unsigned long int printnumber;

	for (b = 63; b >= 0; b--)
	{
		printnumber = n >> b;
		if (printnumber & 1)
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
