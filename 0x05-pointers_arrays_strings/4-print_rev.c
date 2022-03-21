#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: String to print
 */
void print_rev(char *s)
{
	int c;
	int i;
	int j;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	i = c;
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
