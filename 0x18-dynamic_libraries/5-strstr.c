#include "main.h"
#include <stdio.h>
/**
 * _strstr - finds the first occurrence of the substring
 * @haystack: input
 * @needle: input
 * Return: Null or haystack
 */
#include <stdio.h>
#include <string.h>

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	int haystack_len = strlen(haystack);
	int needle_len = strlen(needle);

	if (needle_len > haystack_len)
	{
		return (NULL);
	}

	for (i = 0; i <= haystack_len - needle_len; i++)
	{
		k = i;
		for (j = 0; j < needle_len; j++)
		{
			if (needle[j] == haystack[k])
			{
				k++;
			}
			else
			{
				break;
			}
		}
		if (j == needle_len)
		{
			return (&haystack[i]);
		}
	}

	return (NULL);
}
