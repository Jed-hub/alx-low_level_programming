#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Returns: Void.
 */
void times_table(void)
{
	int n, m, p;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			if (m == 0)
			{
				_putchar(48);
				continue;
			}
			p = n * m;
			_putchar(',');
			_putchar(' ');
			if (p >= 10)
			{
				_putchar(p / 10 + 48);
				_putchar(p % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(p + 48);
			}
		}
		_putchar('\n');
	}
}
