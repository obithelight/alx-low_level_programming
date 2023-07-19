#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: nothing
 */

void times_table(void)
{
	int start, end, result;

	for (start = 0; start <= 9; start++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (end = 1; end <= 9; end++)
		{
			result = (start * end);
			if ((result / 10) > 0)
			{
				_putchar((result / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((result % 10) + '0');

			if (end < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
