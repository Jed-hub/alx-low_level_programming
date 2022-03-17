#include "main.h"

/**
 * print_triangle - Prints triangle
 * @size: integer
 *
 * Return: void.
 */
void print_triangle(int size)
{
	int n = 1, m;

	while (n <= size && size > 0)
	{
		m = 0;
		while (m < size - n)
		{
			_putchar(' ');
			m++;
		}
		m = 0;
		while (m < n)
		{
			_putchar(35);
			m++;
		}
		_putchar('\n');
		n++;
	}
	if (n == 1)
	{
		_putchar('\n');
	}
}
