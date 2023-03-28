#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: pointer parameter variable
 * Return: 0
 */
void print_rev(char *s)
{
	int i;
	int str = 0;

	for (i = 0; str[i] != '\0'; i++)
		str++;
	for (i = str; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

