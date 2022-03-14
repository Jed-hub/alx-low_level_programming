#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, l, k;

	for (n = 48; n < 58; n++)
	{
		for (m = 48; m < 57; m++)
		{
			for (l = 48; l < 58; l++)
			{
				for (k = 49; k < 58; k++)
				{
					putchar(n);
					putchar(m);
					if (n != 58 || m != 57)
					{
						putchar(' ');
					}
					putchar(l);
					putchar(k);
					if (l != 58 || k != 58)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
