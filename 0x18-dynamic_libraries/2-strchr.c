#include <stdio.h>
#include "main.h"
/**
 * _strchr - returns pointer to the first occurrence
 * @s: string
 * @c: character
 * Return: Null if not found
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}

	return (NULL);
}
