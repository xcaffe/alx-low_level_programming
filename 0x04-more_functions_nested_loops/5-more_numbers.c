#include "main.h"

/**
 * more_numbers - function prints number.
 * Return: 0-9 should be the value.
 */
void more_numbers(void)
{
	int c, i;

        for (i = 0; i <= 9; i++)
        {
	for (c = 0; c <=14; c++)
	{
                if (c > 9)
                _putchar((c / 10) + '0');
		_putchar((c % 10) + '0');
        }
       	_putchar('\n');
	}
}
