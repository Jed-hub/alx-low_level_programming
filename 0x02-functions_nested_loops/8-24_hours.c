#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 *
 * @
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int n, m, l, k;

	for (n = 48; n <= 50; n++)
	{
		for (m = 48; m <= 51; m++)
		{
			for (l = 48; l <= 53; l++)
			{
				for (k = 48; k <= 57; k++)
				{
					_putchar(n);
					_putchar(m);
					if (n != 50 || m != 53)
					{
						_putchar(58);
					}
					_putchar(l);
					_putchar(k);
					if (l != 53 || k != 58)
					{
						_putchar('\n');
					}
				}
			}
		}
	}
	_putchar('\n');
	return;
}
