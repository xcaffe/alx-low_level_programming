#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: First string
 * @s2: second string
 * @n:number of bytes
 * Return: point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *s;
	while (s1 && s1[k])
		k++;
	while (s2 && s2[l])
		l++;
	if (n < l)
		s = malloc(sizeof(char) * (k + n + 1));
	else
		s = malloc(sizeof(char) * (k + l + 1));
	if (!s2)
		return (NULL);
	while (i < k)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < l && i < (k + n))
		s[i++] = s2[j++];
	while (n >= l && i (k + l))
		s[i++] = s2[j++];
	s[i] = '\0';
	return (s);
}
