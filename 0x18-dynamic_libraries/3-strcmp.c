#include "main.h"
/**
 * _strcmp -  compares two string
 * @s1: pointer of the string
 * @s2: pointer of the second string
 * Return: return compaired file
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
