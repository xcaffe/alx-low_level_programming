#include "main.h"
#include <string.h>
/**
 * rev_string - print string in reverse
 * @s: pointer parameter variable
 * Return: 0
 */
void rev_string(char *s)
{
	int a;
	char rev = s[0];
	int len = 0;

	while (s[len] != '\0')
		len++;

	for (a = 0; a < len; a++)
	{
		len--;
		rev = s[a];
		s[a] = s[len];
		s[len] = rev;
	}
}
