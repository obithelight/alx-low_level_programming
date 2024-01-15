#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: parameter
 * Return: 1 if c is a digit, return 0 if otherwise
 */

int _isdigit(int c)
{
	if ((c >= (0 + 48)) && (c <= (9 + 48)))
	{
		return (1);
	}
	return (0);
}
