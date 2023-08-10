#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: destination string
 * @s2: source string
 * @n: number of bytes
 *
 * Return: pointer to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j, k, len1 = 0, len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;

	len1 = i;
	len2 = j;

	if (n >= len2)
	{
		n = len2;
	}

	concat = malloc(len1 + n + 1);
	if (concat == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < len1 + n; k++)
	{
		if (*s1)
		{
			concat[k] = *s1;
			s1++;
		}
		else
		{
			concat[k] = *s2;
			s2++;
		}
	}
	concat[k] = '\0';
	return (concat);
}
