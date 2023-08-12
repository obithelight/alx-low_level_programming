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

	ptr = 0;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == 0)
	{
		return (NULL);
	}
	return (ptr);
}
