#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character in a string
 * Return: pointer to first occurence of c in s,
 *	or NULL character if is not found
 */

char *_strchr(char *s, char c)
{
	for (; strlen(s); s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return ('\0');
}
