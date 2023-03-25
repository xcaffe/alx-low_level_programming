#include "main.h"

/**
 * print_square - check the code
 * @size: variable for size
 * Return: Always 0.
 */
void print_square(int size)
{
	int c, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < size; c++)
		{
		for (i = 0; i < size; i++)
		{
		_putchar(35);
		}
	_putchar('\n');
		}
	}
}
