#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 * @dest: The string to be concatenated upon by @src
 * @src: The source string to be appended on @dest
 * Return: A pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_length = 0;

	while (dest[i++])
	{
		dest_length++;
	}

	for (i = 0; src[i]; i++)
	{
		dest[dest_length++] = src[i];
	}

	return (dest);
}
