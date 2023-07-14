#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */

int main(void)
{
	char lowercase, uppercase;

	lowercase = 'a';
	uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');

	return (0);
}
