#include "search_algos.h"

/**
 * print_array - prints value that matches at index
 * @array: pointer to the first element
 * @lowest: lowest of the array
 * @highest: highest value to print
 * Return: nothing
 */
void print_array(int *array, size_t lowest, size_t highest)
{
	char *delimiter = NULL;

	printf("Searching in array: ");

	for (; lowest <= highest; lowest++)
	{
		if (delimiter != NULL)
			printf("%s", delimiter);
		printf("%d", array[lowest]);
		delimiter = ", ";
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers using BSA
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t lowest = 0, mid, highest = size - 1;

	if (!array)
		return (-1);

	/* printing the array at the beginning */
	print_array(array, lowest, highest);

	while (lowest != highest)
	{
		mid = (lowest + highest) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			highest = mid - 1;
		else
			lowest = mid + 1;
		print_array(array, lowest, highest);
	}
	/* for edge cases */
	if (array[highest] == value)
		return (highest);
	return (-1);
}
