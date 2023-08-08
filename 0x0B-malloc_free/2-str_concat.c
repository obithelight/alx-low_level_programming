#include "main.h"
#include <stdlib.h>
#include <string.h>

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
	int a;
	int b;
	int c;
	int len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (a = 0; s1[a]; a++)
		;

	for (b = 0; s2[b]; b++)
		;

	ptr = malloc(sizeof(char) * (a + b + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (c = 0; c < a; c++)
	{
		ptr[c] = s1[c];
	}

	len2  = b;
	for (b = 0; b <= len2; c++, b++)
	{
		ptr[c] = s2[b];
	}
	return (ptr);
}
