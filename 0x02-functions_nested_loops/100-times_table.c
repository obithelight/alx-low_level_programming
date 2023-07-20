#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n: parameter
 * Return: nothing
 */

void print_times_table(int n)
{
	int num1, num2, prod;

	if (n >= 0 && n <= 15)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			_putchar(48);
			for (num2 = 1; num2 <= n; num2++)
			{
				prod = num1 * num2;
				_putchar(44);
				_putchar(32);
				if (prod <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(prod + 48);
				}
				else if (prod <= 99)
				{
					_putchar(32);
					_putchar((prod / 10) + 48);
					_putchar((prod % 10) + 48);
				}
				else
				{
					_putchar(((prod / 100) % 10) + 48);
					_putchar(((prod / 10) % 10) + 48);
					_putchar((prod % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
