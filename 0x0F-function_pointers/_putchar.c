#include <unistd.h>

/**
 * _putchar - writes a character to the std output
 * @c: character to print
 *
 * Return: the character printed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
