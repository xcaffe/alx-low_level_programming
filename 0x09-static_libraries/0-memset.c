#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @b: constant byte
 * @s: pointed memory area
 * @n: bytes
 * Return: vlue of pointed area
 */
char *_memset(char *s, char b, unsigned int n)
{
	return memset(s, b, n);
}
