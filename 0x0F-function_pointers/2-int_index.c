#include "function_pointers.h"
#include <string.h>

/**
 * int_index - searches for an integer
 * @array: array of elements
 * @size: number of elements in the array
 * @cmp: function pointer
 *
 * Return: an integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int o;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (o = 0; o < size; o++)
	{
		if (cmp(array[o]))
		return (o);
	}

	return (-1);
}
