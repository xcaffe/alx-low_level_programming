#include "main.h"
/**
 * _strspn - entry point
 * @s: input
 * @accept: input
 * Return: value 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, v, c;

	v = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		c = 0;

		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				v++;
				c = 1;
			}
		}

		if (c == 0)
			return (v);
	}

	return (v);
}
