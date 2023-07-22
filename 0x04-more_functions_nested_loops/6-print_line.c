#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: parameter
 * Return: nothing
 */

void print_line(int n)
{
	int k;

	for (k = 0; k <= n; k++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
