#include "main.h"
/**
 * print_number - prints an integer
 * @n: parameter to be printed
 * Return: no value
 */
void print_number(int n)
{
	unsigned int prn = n;

	if (n < 0)
	{
		_putchar('-');
		prn = -prn;
	}

	if ((prn / 10) > 0)
	print_number(prn / 10);
	_putchar((prn % 10) + '0');
}

