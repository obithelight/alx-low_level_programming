#include "main.h"

/**
 * puts_half - half of a string.
 * @str: string to be printed.
 */

void puts_half(char *str)
{
	int i = 0, length = 0, j;

	while (str[i++])
		length++;

	if ((length % 2) == 0)
		j = length / 2;

	else
		j = (length + 1) / 2;

	for (i = j; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
