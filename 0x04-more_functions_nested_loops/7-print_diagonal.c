#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal
 * @n: The number of time the character \ is printed
 *
 */
void print_diagonal(int n)
{
	int m, k, l;

	m = 32;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 1; k <= n; k++)
		{
			for (l = 1; l < k; l++)
			{
				_putchar(m);
			}
			if (n <= 0)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(92);
				_putchar('\n');
			}
		}
	}
}
