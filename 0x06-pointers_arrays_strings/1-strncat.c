#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: string parameter to be appended
 * @src: string parameter that would append to dest
 * @n: parameter for number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len++] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
