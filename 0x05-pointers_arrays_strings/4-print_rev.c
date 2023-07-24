#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: function parameter
 * Return: nothing
 */

void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i]; i++);

	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
