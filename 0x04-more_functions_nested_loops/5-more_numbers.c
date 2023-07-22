#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 *		followed by a new line
 * Return: 0
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b > 9)
			{
				_putchar(b / 10 + 48);
			}
			_putchar(b % 10 + 48);
		}
		_putchar('\n');
	}
}
