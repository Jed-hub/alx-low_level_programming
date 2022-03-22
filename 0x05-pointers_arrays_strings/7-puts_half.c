#include "main.h"

/**
 * puts_half - Prints half of string
 * @str: Array of string to be printed
 */
void puts_half(char *str)
{
	int i, j, len;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		for (j = i / 2; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	else if (i % 2)
	{
		for (len = (i - 1) / 2; len < i - 1; len++)
		{
			_putchar(str[len + 1]);
		}
	}
	_putchar('\n');
}
