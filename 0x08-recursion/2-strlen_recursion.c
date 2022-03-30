#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The character
 *
 * Return: Length of the string.
 */

int _strlen_recursion(char *s)
{
	int n;

	if (*s == '\0')
	{
		return (0);
	}

	n = sizeof(*s) + _strlen_recursion(s + 1);
	return (n);
}
