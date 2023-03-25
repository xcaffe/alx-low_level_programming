#include "main.h"

/**
 * print_line - function prints line
 * @n: declare variable
 * Return: 0-9 should be the value.
 */
void print_line(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= n; i++)
		{
		_putchar('_');
		}
		_putchar('\n');
	}
}
