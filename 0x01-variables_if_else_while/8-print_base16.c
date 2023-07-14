#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0
 */

int main(void)
{
	int number, alpha;

	number = 0;
	alpha = 'a';

	while (number < 10)
	{
		putchar(number + 48);
		number++;
	}

	while (alpha < 'g')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');
	return (0);
}
