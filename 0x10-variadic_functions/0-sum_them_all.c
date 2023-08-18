#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: first parameter number
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list my_number_list;

	unsigned int a, total = 0;

	va_start(my_number_list, n);
	if (n == 0)
	{
		return (0);
	}

	for (a = 0; a < n; a++)
	{
		total = total + va_arg(my_number_list, int);
	}

	va_end(my_number_list);

	return (total);
}
