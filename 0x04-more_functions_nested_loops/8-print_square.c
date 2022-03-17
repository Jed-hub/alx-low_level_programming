#include "main.h"

/**
 * print_square - Prints a square
 * @size: The size of the square
 *
 */
void print_square(int size)
{
	int n, m, l;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		n = 0;
		m = 35;
		while (n < size)
		{
			for (l = 1; l <= size; l++)
			{
				_putchar(m);
			}
			_putchar('\n');
			n++;
		}
	}
}
