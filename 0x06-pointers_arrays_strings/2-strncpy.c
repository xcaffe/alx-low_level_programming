#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: parameter
 * Return: value dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int slen = 0;

	while (src[i++])
	slen++;

	for (i = 0; src[i] && i < n; i++)
	dest[i] = src[i];
	
	for (i = slen; i < n; i++)
	dest[i] = '\0';

	return (dest);
}
