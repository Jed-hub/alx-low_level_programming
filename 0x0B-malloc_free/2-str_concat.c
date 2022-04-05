#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The string to be concatenated
 * @s2: The string to be concatenated
 *
 * Return: Null.
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, n = 0, len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] || s2[i]; i++)
	{
		len++;
	}
	c = malloc(len * sizeof(char));
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		c[n++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		c[n++] = s2[i];
	}

	return (c);
}
