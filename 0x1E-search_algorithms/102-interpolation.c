#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of integers with ISA
 * @array: pointer to the first element of array
 * @size: number of elements in array
 * @value: value to search for
 * Return: the function
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (interpol_helper(array, 0, size - 1, value));
}

/**
 * interpol_helper - helper function
 * @array: pointer to the first element
 * @low: the lower bound
 * @high: the upper bound
 * @value: value to search for
 * Return: first index where value is located
 */

int interpol_helper(int *array, size_t low, size_t high, int value)
{
	size_t pos;

	pos = low + (((double)(high - low) / (array[high] - array[low])) *
	(value - array[low]));

	if (pos >= low + high)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}

	printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

	if (array[pos] == value)
		return (pos);
	else if (array[pos] > value)
	{
		return (interpol_helper(array, low, high - 1, value));
	}
	else
	{
		return (interpol_helper(array, low + 1, high, value));
	}

	return (-1);
}
