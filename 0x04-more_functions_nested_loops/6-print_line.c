#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: The number of time the character _ is printed
 *
 */
void print_line(int n)
{
	int m, l;

	m = 95;
	for (l = 1; l <= n; l++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(m);
		}
	}
	_putchar('\n');
}
