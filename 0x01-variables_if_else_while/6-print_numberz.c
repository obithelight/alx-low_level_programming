#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0
 */

int main(void)
{
	int single_digit;

	single_digit = 0;
	while (single_digit <= 9)
	{
		putchar(single_digit + '0');
		single_digit++;
	}
	putchar('\n');

	return (0);
}
