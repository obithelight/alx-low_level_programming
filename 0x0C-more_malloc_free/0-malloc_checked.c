#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: integer
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *pointer;

	pointer = malloc(sizeof(*pointer) * b);

	if (pointer == NULL)
	{
		exit(98);
	}

	return (pointer);
}
