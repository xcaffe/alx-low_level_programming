#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: value is 0
 */
int main(void)
{
	int i, m, n;

	for (i = 48; i < 58; i++)
	{
		for (m = 49; m < 58; m++)
		{
			for (n = 50; n < 58; n++)
			{
				if (n > m && m > n)
				{
					putchar(i);
					putchar(m);
					putchar(n);
					if (i != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
