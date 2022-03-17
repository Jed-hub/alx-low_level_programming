#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers
 *
 * Return: 0.
 */
void more_numbers(void)
{
	int n = 0;
	char m, l;

	while (n < 10)
	{
		for (m = 0; m <= 14; m++)
		{
			l = m;
			if (m > 9)
			{
				_putchar('1');
				l = m % 10;
			}
			_putchar('0' + l);

		}
		_putchar('\n');
		n++;
	}
}
