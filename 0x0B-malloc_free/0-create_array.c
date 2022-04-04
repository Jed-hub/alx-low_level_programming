#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates array of chars
 * and initializes it with a specific char
 * @size:The size of the array
 * @c: The character
 *
 * Return: The pointer.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *str;

	str = malloc(size * sizeof(char));
	n = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	while (n < size)
	{
		str[n] = c;
		n++;
	}
	return (str);
}
