#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: NULL on failure, otherwise pointer to memory
 */

int *array_range(int min, int max)
{
	int i;
	int *box;
	int size = 0;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	box = malloc(sizeof(*box) * size);
	if (box == NULL)
		return (NULL);

	for (i = 0; min + i <= max; i++)
		box[i] = min + i;

	return (box);
}
