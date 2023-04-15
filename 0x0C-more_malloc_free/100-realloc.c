#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size in bytes, of the allocated space for ptr
 * @new_size: new size in bytes of the new memory block
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	char *old_ptr;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
		return (malloc(new_size));
	nptr = (malloc(new_size));
	if (!nptr)
		return (NULL);
	old_ptr = ptr;

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			nptr[a] = old_ptr[a];
	}
	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			nptr[a] = old_ptr[a];
	}
	free(ptr);
	return (nptr);
}
