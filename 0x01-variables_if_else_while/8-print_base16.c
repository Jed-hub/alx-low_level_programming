#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n, h;

	n = '0';
	h = 'a';
	while (n <= '9' && h <= 'f')
	{
		putchar(n);
		putchar(h);
		n++;
		h++;
	}
	putchar('\n');
	return (0);
}
