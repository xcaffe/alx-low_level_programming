#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copy string pointed by src
 * @dest: parameter
 * @src: parameter
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == Null)
		return (Null);
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
