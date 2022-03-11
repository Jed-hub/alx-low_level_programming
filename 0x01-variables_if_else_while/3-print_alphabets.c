#include <stdio.h>

/**
 * main - Prints the alphabets in lowercase and then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch, CH;

	ch = 'a';
	CH = 'A';
	while (ch <= 'z' && CH <='Z')
	{
		putchar(ch);
		putchar(CH);
		ch++;
		CH++;
	}
	putchar('\n');
	return (0);
}
