#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + 1] = src[i];
	dest[des_len + i] = '\0';

	return (dest);
}
