#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two that is joined to s1
 *
 * Return: a pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i;
	int j;
	int x;
	int y;
	int len;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		len++;
	}

	for (j = 0; s2[j]; j++)
	{
		len++;
	}

	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < i; x++)
	{
		ptr[x] = s1[x];
	}

	for (y = 0; y < j; y++)
	{
		ptr[x + y] = s2[y];
	}
	return (ptr);
}
