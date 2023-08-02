#include "main.h"

/**
 * sqrt_helper - helper function for square root
 * @n: number 1
 * @s: number 2
 *
 * Return: 0
 */

int sqrt_helper(int n, int s)
{
	if ((s * s) == n)
	{
		return (s);
	}
	else if ((s * s) > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_helper(n, s + 1));
	}
}
