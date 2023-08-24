#include "main.h"
/**
 * puts2 - print string atarting with the first
 * @str: parameter
 * Return: 0;
 */
void puts2(char *str)
{
	int fich = 0;
	int a = 0;
	char *r = str;
	int b;

	while (*r != '\0')
	{
		r++;
		fich++;
	}
	a = fich - 1;
	for (b = 0 ; b <= a ; b++)
	{
		if (b % 2 == 0)
		{
			_putchar(str[b]);
		}
	}
	_putchar('\n');
}
