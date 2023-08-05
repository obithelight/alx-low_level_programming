#include "main.h"

/**
 * _islower - a function that chcks for lowercase characters
 *
 * @c: parameter
 *
 * Return: 1 if c is lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
