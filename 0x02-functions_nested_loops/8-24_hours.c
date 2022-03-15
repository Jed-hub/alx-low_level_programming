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
	int n, m;

	for (n = 0; n <= 23; n++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar(n / 10 + 48);
			_putchar(n % 10 + 48);
			_putchar(58);
			_putchar(m / 10 + 48);
			_putchar(m % 10 + 48);
			_putchar('\n');
		}
	}
	return;
}
