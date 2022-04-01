#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string
 *
 * Return: The length of s.
 */
int _strlen(char *s)
{
	int l;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}
