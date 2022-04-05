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
	m = 0;
	c = malloc(n * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	if (n == 0)
	{
		return (NULL);
	}

	while (str[m] != '\0')
	{
		c[n] = str[m];
		m++;
		n = m;
	}

	return (c);
}
