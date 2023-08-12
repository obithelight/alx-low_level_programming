#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: array of elements
 * @size: size of the array in bytes
 *
 * Return: NULL on failure, otherwise pointer to the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *box;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == 0)
	{
		return (NULL);
	}

	box = ptr;
	for (i = 0; i < (nmemb * size); i++)
	{
		box[i] = 0;
	}

	return (ptr);
}
