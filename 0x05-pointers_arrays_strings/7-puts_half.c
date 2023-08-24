#include "main.h"
/**
 * puts_half - print half of string
 * @str: parameter
 * Return: 0
 */
void puts_half(char *str)
{
	int i, j;
	int half = 0;

	for (i = 0; str[i] != '\0'; i++)
		half++;
	j = (half / 2);
	if ((half % 2) == 1)
		j = ((half + 1) / 2);
	for (i = j; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
