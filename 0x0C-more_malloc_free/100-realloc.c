#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: void pointer
 * @old_size: size of ptr
 * @new_size: size of new memory block
 *
 * Return: NULL if new_size is 0, otherwise ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *box;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return ((void *)malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	box = malloc(new_size);
	if (box == NULL)
	{
		return (NULL);
	}
	if (old_size > new_size)
	{
		old_size = new_size;
	}
	while (old_size--)
	{
		box[old_size] = ((char *)ptr)[old_size];
	}
	free(ptr);
	return ((void *)box);
}
