#include "main.h"

/**
 * print_line - function prints line
 * @n: declare variable
 * Return: straight line:
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
	for (c = 1; c <= n; c++)
	{
		_putchar(95);
	}
		_putchar('\n');
	}
}
