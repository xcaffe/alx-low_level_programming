#include "main.h"

/**
 * more_numbers - function prints number.
 * Return: 0-9 should be the value.
 */
void more_numbers(void)
{
        int c;

        for (c = 0; c <= 9; c++)
        {
                if ((i == 2) || (i == 4))
                        continue;
                else
                _putchar(c + '0');
        }
                _putchar('\n');
}
