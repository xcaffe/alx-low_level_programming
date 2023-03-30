#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: pointer string
 * Return: value string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return (s);
}
