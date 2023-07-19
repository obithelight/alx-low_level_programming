#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: nothing
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{

			result = i * j;
			if (result > 9)
			{
				if (j == 9)
				{
					_putchar(result / 10 + 48);
					_putchar(result % 10 + 48);
				}
				else
				{
					_putchar(result / 10 + 48);
					_putchar(result % 10 + 48);
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				if (j == 9)
				{
					_putchar(result + 48);
				}
				else
				{
					_putchar(result + 48);
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
