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
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			return (i);
		}

	return (array[i]);
}
