#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: pointer parameter variable
 * Return: 0
 */
void print_rev(char *s)
{
        int i, j, rev;
        int count = 0;

        while (s[i] != '\0';)
	{
		count++;
	}
	j = count - 1;
        for (i = 0; i < count; i++)
	{
		rev[i] = s[j];
		j--;
	}
	_putchar(rev);
        _putchar('\n');
}
