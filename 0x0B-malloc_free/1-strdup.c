#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: copy of the string
 */

char *_strdup(char *str)
{
	int i;
	int j;
	int len = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		len++;
	}

	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < len; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
}
