#include "main.h"
#include <string.h>
/**
 * rev_string - print string in reverse
 * @s: pointer parameter variable
 * Return: 0
 */
void rev_string(char *s);
{
	int i;
	int len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		char ch = str[i];

		str[i] = str[len - i - 1];
		str[len - i - 1] = ch;
	}
}
