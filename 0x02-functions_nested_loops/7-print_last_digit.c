#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @a: parameter
 *
 * Return: 0
 */

int print_last_digit(int a)
{
	int last_digit;

	last_digit = a % 10;

	if (a < 0)
	{
		last_digit = -last_digit;
	}
	_putchar(last_digit + 48);

	return (last_digit);
}
