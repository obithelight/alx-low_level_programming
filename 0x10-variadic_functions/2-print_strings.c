#include <string.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


/**
 * print_strings - function that print strings
 * @separator: string to be printed between strings
 * @n: number of strings to be passed to function
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_strings;

	unsigned int i;
	char *st;

	va_start(my_strings, n);

	for (i = 0; i < n; i++)
	{
		st = va_arg(my_strings, char *);

		if (st == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", st);
		}

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(my_strings);
}
