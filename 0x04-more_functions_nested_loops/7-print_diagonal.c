#include "main.h"

/**
 * print_diagonal - function prints diagonal line
 * @n: declare variable
 * Return: straight line:
 */
void print_diagonal(int n)
{
	int c, i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c < n; c++)
	{
		for (i = 1; i < c; i++)
	{
		_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
