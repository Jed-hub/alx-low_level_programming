#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated spacein memory
 * which contains a copy oh the string given as parameter.
 * @str: The string to return.
 *
 * Return: Pointer.
 */

char *_strdup(char *str)
{
	char *c;
	int n;

	n = 0;

	c = malloc(n * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	while (*str++)
	{
		n++;
		c = malloc((n + 1) * sizeof(char));
	}

	if (!c)
	{
		return (NULL);
	}

	for (n++; n--;)
	{
		c[n] = *--str;
	}

	return (c);
}
