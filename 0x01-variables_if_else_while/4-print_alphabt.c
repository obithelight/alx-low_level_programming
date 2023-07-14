#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, followed
 *	by a new line. Print all letters except q and e.
 * Return: 0
 */

int main(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		if (!(alpha == 'e') && !(alpha == 'q'))
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
