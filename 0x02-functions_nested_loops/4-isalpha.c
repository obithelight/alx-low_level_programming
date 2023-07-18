#include "main.h"

/**
 * _isalpha - A function that checks for alphabetic characters
 *
 * @c: parameter
 *
 * Return: 1 if c is a letter, lowercase or uppercase,
 *	0 if otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
