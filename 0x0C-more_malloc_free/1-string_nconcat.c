#include "main.h"
#include <stdlib.h>
#include <string.h>

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
	unsigned int i, len1 = 0, len2 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n > len2)
		n = len2;
	p = malloc(len1 + n + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1 + n; i++)
	{
		if (*s1)
		{
			p[i] = *s1;
			s1++;
		}
		else
		{
			p[i] = *s2;
			s2++;
		}
	}
	p[i] = '\0';
	return (p);
}
