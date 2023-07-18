#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet. in lowercase
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int count;

	char alpha;

	/**
	 * (WHILE LOOP)
	 * count = 1;
	 * alpha = 'a';
	 * while (count <= 10)
	 * {
	 *	while (alpha <= 'z')
	 *	{
	 *		_putchar(alpha);
	 *		alpha++;
	 *	}
	 *	count++;
	 *	alpha = 'a';
	 *	_putchar('\n');
	 * }
	 */

	for (count = 1; count <= 10; count++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
