#include "main.h"
/**
 * _atoi - converts a string to integer
 * @s: string
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int a, b, c, length, d, con;

	a = 0;
	b = 0;
	c = 0;
	length = 0;
	d = 0;
	con = 0;

	while (s[length] != '\0')
		length++;
	while (a < length && d == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			con = s[a] - '0';
			if (b % 2)
				con = -con;
			c = c * 10 + con;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
	a++;
	}
	if (d == 0)
		return (0);
	return (c);
}
