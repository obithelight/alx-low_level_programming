#include "search_algos.h"

/**
 * min - finds the minimum between two integers
 * @num1: first integer
 * @num2: second integer
 *
 * Return: minimum between a and b
 */
size_t min(size_t num1, size_t num2)
{
	return ((num1 < num2) ? num1 : num2);
}

/**
 * jump_search - a function that searches for a value in a sorted array
 *		of integers using the Jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0;
	size_t step = 0;

	if (!array || !size)
		return (-1);

	/* find the block that may contain the value */
	while (array[step] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);
		prev = step;
		step += sqrt(size);
		if (step > size - 1)
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);

	/* linear search */
	while (prev <= min(step, size - 1))
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
