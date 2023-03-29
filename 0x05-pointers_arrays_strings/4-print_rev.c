#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: pointer parameter variable
 * Return: 0
 */
void print_rev(char *s)
{
        int i = 0;
        int count;

        for (i = 0; s[i] != '\0'; i++)
                count++;
        for (i = count; i >= 0; i--)
                _putchar(s[i]);
        _putchar('\n');
}
