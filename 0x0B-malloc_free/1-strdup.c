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
	int n, m;

	n = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (m = 0; str[m]; m++)
	{
		n++;
		c = malloc((n + 1) * sizeof(char));
	}

	if (c == NULL)
	{
		return (NULL);
	}

	for (m = 0; str[m]; m++)
	{
		c[m] = str[m];
	}
	c[n] = '\0';

	return (c);
}
